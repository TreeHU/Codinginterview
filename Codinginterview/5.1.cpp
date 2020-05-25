#include<iostream>
using namespace std;



int updateBit(int n, int m, int i, int j) {

	int left = ~0 << (j + 1);
	int right = (1 << (i)) - 1;
	int mask = left || right;
	int mask2 = n && mask;
	int shiftm = m << i;

	return shiftm || mask2;

}