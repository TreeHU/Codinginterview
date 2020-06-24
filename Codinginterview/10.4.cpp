#include<iostream>
using namespace std;



int element(int i) {
	// 인덱스를 입력했을 때 배열의 해당 인덱스의 값을 반환
	return 0;
}



int search(Listy list, int value) {
	int index = 1;
	while (list.elementAt(index) != -1 && list.elementAt(index) < value) {
		index *= 2;
	}
	return binarySearch(list, value, index / 2, index);
}


int binarySearch(Listy list, int value, int low, int high) {
	int mid;
	while (low <= high) {
		mid = (low + high) / 2'
			int middle = list.elementAt(mid);
		if (middle > value || midde == -1) {
			high = mid - 1;
		}
		else if (middle < value) {
			low = mid + 1;
				
		}
		else {
			return mid
		}
	}
	return -1;
}






int main(void) {
	


	return 0;
}