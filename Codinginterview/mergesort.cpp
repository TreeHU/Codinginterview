#include <iostream>
using namespace std;







void merge(int * array, int * helper, int low, int middle, int high) {
	for (int i = low; i <= high; i++) {
		helper[i] = array[i];
	}
	int helperLeft = low;
	int helperRight = middle + 1;
	int current = low;

	while (helperLeft <= middle && helperRight <= high) {
		if(array[current] <= helper[helperRight]){
			array[current] = helper[helperLeft];
			helperLeft++;
		}
		else {
			array[current] = helper[helperRight];
			helperRight++;
		}
		current++;
	}
	int remaining = middle - helperLeft;
	for (int i = 0; i <= remaining; i++) {
		array[current + i] = helper[helperLeft + i];
	}



}
void mergesort(int * array, int * helper, int low, int high) {
	if (low < high) {
		int middle = (low + high) / 2;
		mergesort(array, helper, low, middle);
		mergesort(array, helper, middle + 1, high);
		merge(array, helper, low, middle, high);
	}
}


void mergesort(int * array) {
	int* helper = new int[7];
	mergesort(array, helper, 0, 6);
}

int main(void) {
	int array[7] = {7,6,5,4,3,2,1 };

	mergesort(array);


	for (int i = 0; i < 7; i++) {
		cout << array[i] << ",";
	}
	return 0;
}