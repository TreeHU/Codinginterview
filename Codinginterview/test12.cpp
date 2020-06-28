#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


string merge(string s, int index, int window) {
	string temp = "";
	cout << "index: " << index << endl;
	for (int i = 0; i < window; i++) {
		temp += s[index];
		index++;
	}
	cout << "merge: " << temp << endl;
	return temp;
}

int main() {
	string s = "aabccc";
	int count = 0;
	string compress = "";
	int result = -1;
	int window = 1;

	for (int i = 0; i < s.size(); i = i + window) {
		cout << i << endl;
		count++;
		if (merge(s, i, window) != merge(s, i + window, window)) {
		
			compress += "" + to_string(count) + merge(s, i, window);
			count = 0;
			
		}
	}

	cout << compress << endl;
	return 0;
}