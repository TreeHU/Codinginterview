#include <iostream>
#include <algorithm>
using namespace std;


int search(string strings[], string str, int first, int last);
int search(string strings, string str);


/*
int binarySearch(string target, string arr[],int begin, int end) {
	int mid = (begin + end) / 2;


	if (begin >= end) {
		return -1;
	}
	if (arr[mid] == target) {
		return mid;
	}
	int left = binarySearch(target, arr, begin, mid);
	int right = binarySearch(target, arr, mid + 1, end);

	if (left  || right ) {
		return max(left, right);
	}
	return -1;
}




int main(void) {
	string target = "ball";
	string arr[] = { "at", "","","","","ball","","car","","","dad","","" };

	int size = sizeof(arr) / sizeof(string);

	cout << binarySearch(target, arr,0, size-1) << endl;


	return 0;
}
*/








int search(string strings[], string str, int first, int last) {
	if (first > last) return -1;
	int mid = (last + first) / 2;


	if (strings[mid].empty()) {
		int left = mid - 1;
		int right = mid + 1;
		while (true) {
			if (left < first && right > last) {
				return -1;
			}
			else if (right <= last && !strings[right].empty()) {
				mid = right;
				break;
			}
			else if (left >= first && !strings[left].empty()) {
				mid = left;
				break;
			}
			right++;
			left--;
		}
	}

	if (str == strings[mid]) {
		return mid;
	}
	else if (strings[mid].compare(str) < 0) {
		return search(strings, str, mid + 1, last);
	}
	else {
		return search(strings, str, first, mid - 1);
	}



}

int main() {

	string target = "ball";
	string arr[] = { "at", "","","","","ball","","car","","","dad","","" };

	int size = sizeof(arr) / sizeof(string);
	cout << search(arr, target, 0, size-1) << endl;


	return 0;
}