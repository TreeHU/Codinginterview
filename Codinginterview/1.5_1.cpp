#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;



int getcindex(char c) {
	int idx = 0;
	if (c >= 'a' || c <= 'z') {
		idx = c - 'a';
	}
	else {
		if (c >= 'A' || c <= 'Z') {
			idx = c - 'A';
		}
	}
	return idx;
}





bool function(string st1, string st2) {
	int arr1[26] = { 0 };
	int arr2[26] = { 0 };
	for (int i = 0; i < st1.size(); i++) {
		arr1[getcindex(st1[i])]++;
	}
	for (int i = 0; i < st2.size(); i++) {
		arr2[getcindex(st2[i])]++;
	}

	int st1len = st1.size();
	int st2len = st2.size();
	int count1 = 0;
	int count2 = 0;
	if (abs(st1len - st2len) > 1) {
		cout << "debug1" << endl;
		return false;
	}
	else if(abs(st1len - st2len) == 0){
		for (int i = 0; i < 26; i++) {
			if (arr1[i] != arr2[i]) {
				count1++;
			}
		}
		if (count1 > 2) {
			cout << "debug2" << endl;
			return false;
		}
	}
	else {
		for (int i = 0; i < 26; i++) {
			if (arr1[i] != arr2[i]) {
				count2++;
			}
		}
		if (count2 > 3) {
			cout << "debug3" << endl;
			return false;
		}

	}
	cout << "debug4" << endl;
	return true;
}




int main() {

	cout << function("pale", "bake") << endl;

	return 0;
}