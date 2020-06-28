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
	cout  << "merge: " << temp << endl;
	return temp;
}



int main(void) {
	string s = "ababcdcdababcdcd";
	int count = 0;
	string compress = "";
	int result = -1;
	for (int window = 1; window <= s.size() / 2; window++) {
		for (int i = 0; i < s.size(); i = i + window) {
			cout << i << endl;
			count++;
			if (merge(s, i + window, window) != merge(s, i, window)) {

				compress += "" + to_string(count) + merge(s, i, window);
				count = 0;

			}
		}
		cout << "compress: " << compress << endl;
		result = result < compress.size() ? compress.size() : result;
	}
	return 0;
}