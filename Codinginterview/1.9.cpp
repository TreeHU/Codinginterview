#include<iostream>
#include <string>
using namespace std;

bool function(string s1, string s2) {
	string xy = s1 + s1;
	if (xy.find(s2) == string::npos) {
		return false;
	}

	return true;
}





int main() {
	cout << function("waterbottle", "erbottlewat");


	//cout << as << endl;
	return 0;
}