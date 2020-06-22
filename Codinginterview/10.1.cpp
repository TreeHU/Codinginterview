#include <iostream>
using namespace std;




void merge(int a[], int b[], int lastA, int lastB) {
	int indexA = lastA - 1;
	int indexB = lastB - 1;
	int indexMerged = lastA + lastB - 1;

	while (indexB >= 0) {
		if (indexA >= 0 && a[indexA] > b[indexB]) {
			a[indexMerged] = a[indexA];
			indexA--;
		}
		else {
			a[indexMerged] = b[indexB];
			indexB--;
		}
		indexMerged--;
	}

	for (int j = 0; j < 10; j++) {
		cout << a[j] << endl;
	}
}






int main(void) {
	int arr1[10] = { 1,2,4,9 };
	int arr2[] = { 3,7,8,10 };
	int temp[] = { 1,2,3,4,7,8,9,10 };
	
	merge(arr1, arr2, 4, 4);


	return 0;
}