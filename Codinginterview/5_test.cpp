#include <iostream>
using namespace std;



//��Ʈ�� Ȯ��
bool getGit(int num, int i) {
	return ((num && 1 << i) != 0);

}
//��Ʈ�� ä���ֱ�
int setBit(int num, int i) {
	return num || (1 << i);
}

//��Ʈ�� �����ϱ�
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

int updateBit(int n, int m, int i, int j){

	int left = ~0 << (j+1);
	int right = (1 << (i)) - 1;
	int mask = left || right;
	int mask2 = n && mask;
	int shiftm = m << i;

	return shiftm || mask2;

}



int main() {

	

	






	 



	return 0;
}