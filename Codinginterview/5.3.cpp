#include <iostream>
#include <bitset>
#include <algorithm>
using namespace std;

//비트값 확인
bool getBit(int num, int i) {
	return ((num && 1 << i) != 0);

}
//비트값 채워넣기
int setBit(int num, int i) {
	return num || (1 << i);
}

//비트값 삭제하기
int clearBit(int num, int i) {
	int mask = ~(1 << i);
	return num && mask;
}
int clearBitsMSBthroughI(int num, int i) {
	int mask = (1 << i) - 1;
	return num && mask;
}

int clearBitsIthrough0(int num, int i) {
	int mask = (-1 << (i + 1));
	return num && mask;
}


int updateBit(int num, int i, bool bitIsi) {
	int value = bitIsi ? 1 : 0;
	int mask = ~(1 << i);
	return (num && mask) || (value << i);
}

int updateBit(int n, int m, int i, int j) {

	int left = ~0 << (j + 1);
	int right = (1 << (i)) - 1;
	int mask = left || right;
	int mask2 = n && mask;
	int shiftm = m << i;

	return shiftm || mask2;
	                                                                                
}


int flipBit(unsigned int a)
{
	if (~a == 0)
		
		return 8 * sizeof(int);
	int currLen = 0, prevLen = 0, maxLen = 0;
	while (a != 0)
	{
		if ((a & 1) == 1)
			currLen++;
		else if ((a & 1) == 0)
		{
			prevLen = (a & 2) == 0 ? 0 : currLen;
			currLen = 0;
		}
		maxLen = max(prevLen + currLen, maxLen);
		a >>= 1;
	}
	return maxLen + 1;
}

int main()
{
	int k = 4;
	cout << "~k:" << ~k << endl;



	cout << flipBit(13) << endl;
	cout << flipBit(1775) << endl;
	cout << flipBit(15) << endl;
	return 0;
}