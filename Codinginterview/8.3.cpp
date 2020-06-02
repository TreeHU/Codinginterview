#include<iostream>
using namespace std;






bool findMagicnum(int * arr, int begin, int end, int &ans) {
	if (end < begin) {
		return false;
	}

	int mid = (begin + end) / 2;
	if (arr[mid] == mid) {
		ans = mid;
		return true;
	}
	if (findMagicnum(arr, begin, mid -1, ans) || findMagicnum(arr, mid +1 , end, ans)) {
		return true;
	}
}


int findMagicnum(int* arr, int size) {
	int ans = -1;
	
	if (findMagicnum(arr, 0, size - 1, ans)) {
		return ans;
	}
}


int main() {
	int arr[11] = { -40,-20,-1,1,2,3,5,7,9,12,13 };
	cout << findMagicnum(arr, 11) << endl;
	return 0;
}