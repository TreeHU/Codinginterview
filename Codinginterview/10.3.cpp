#include<iostream>
using namespace std;




/*
void bs(int* arr, int begin, int end, int &ans) {
	int mid = (begin + end) / 2;
	if (begin >= end) {
		return;
	}
	if (arr[mid] == 5) {
		ans = mid;
	}

	bs(arr, begin, mid,ans);
	bs(arr, mid + 1, end, ans);
}
*/




int bs(int* arr, int left, int right, int x) {

	int mid = (left + right) / 2;
	if (arr[mid] == x) {
		return mid;
	}

	if (left > right) {
		return -1;
	}


	if (arr[left] < arr[mid]) {
		if (arr[left] <= x && arr[mid] >=x) {
			return bs(arr, left, mid-1, x);
		}
		else {
			return bs(arr, mid + 1, right, x);
		}
	}
	else if (arr[mid] < arr[left]) {
		if (arr[mid] < x && arr[right] >= x) {
			return bs(arr, mid + 1, right, x);
		}
		else {
			return bs(arr, left, mid - 1, x);
		}
	}
	else if () {

	}

}














int main(void) {
	int arr[] = { 15,16, 19,20,25,1,3,4,5,7,10,14 };
	int ans;
	int size = sizeof(arr) / sizeof(int);
	bs(arr, 0, size - 1, 5);

	cout << ans << endl;




	return 0;
}