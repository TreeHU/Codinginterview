#include<iostream>
#include<fstream>
#include <string>
using namespace std;





int main() {

	ifstream in("test.txt");
	string s;
	int size = 0;
	int k = 2;
	int cnt = 0;
	string arr[2];
	int i = 0;
	if (in.is_open()) {
	
		while (getline(in, s)) {
			if (i == k-1) {
				i = 0;
			}
			arr[i] = s;
			cout << s << endl;
			i++;
		
		}
	}
	else {
		cout << "X" << endl;
	}

	cout << "result " << endl;
	for (string z : arr) {
		cout << z << endl;
	}
	
	

	return 0;
}