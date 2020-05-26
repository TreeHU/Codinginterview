#include <iostream>
#include <bitset>
#include <algorithm>
#include <vector>
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

/*
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
		cout << "a:"<< a << endl;
	}
	return maxLen + 1;

}

*/


int findLongestSequence(vector <int> seq) {
	//cout << "3" << endl;
	int maxsq = 1;
	for (int i = 0; i < seq.size(); i += 2) {
		int zerosquence = seq.at(i);
		int oneseqright = i - 1 >= 0 ? seq.at(i - 1) : 0;
		int oneseqleft = i + 1 < seq.size() ? seq.at(i + 1) : 0;

		int thiseSeq = 0;
		if (zerosquence == 1) {
			thiseSeq = oneseqleft + 1 + oneseqright;
		}
		if (zerosquence > 1) {
			thiseSeq = 1 + max(oneseqleft, oneseqright);
		}
		else if (zerosquence == 0) {
			thiseSeq = max(oneseqleft, oneseqright);
		}


		maxsq = max(thiseSeq, maxsq);
	}
	return maxsq;
}



vector<int> getSequences(int n) {
	
	//cout << "2" << endl;
	// 연속하는 "1", "0"의 갯수를 담는 vector을 생성
	vector<int> arr;
	int count = 0;
	int flag = 0;
	for (int i = 0; i < sizeof(int) * 8; i++) {
		cout << "bitset: " << bitset<32>(n) << endl;
		cout << "flag:" << flag  << " -- " << "n && 1: " << (n && 1) << endl;
		if ((n & 1) != flag) {
			cout << "count:" << count << endl;
			arr.push_back(count);
			flag = (n & 1);
			count = 0;
		}
		count++;
		n >>= 1;
		//cout << "i: " << i << " :  n>>1:" << (n >>= 1) << endl;
		//cout << "bitset: "<< bitset<32>(n >> 1) << endl;
	}
	arr.push_back(count);
	return arr;
}

int longestSequence(int n) {
	//cout << "1" << endl;
	if (n == -1) {
		return sizeof(int) * 8;
	}
	vector<int> sequence = getSequences(n);
	
	for (int i = 0; i < sequence.size(); i++) {
		cout << "seq:"<< sequence[i] << endl;
	}
	
	return findLongestSequence(sequence);
}


int main()
{
	cout << "ans: " <<longestSequence(1775) << endl;
	return 0;
}