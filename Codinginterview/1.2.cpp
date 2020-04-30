#include<iostream>
#include<string>
using namespace std;


void permutation(string prefix, string st1,string st2) {
		
	

	if (st1.length() == 0) {
		//cout << prefix << endl;
		if (prefix.compare(st2) == 0) {
			cout << "true" << endl;
		}
		else {
			cout << "false" << endl;
		}
	}
		
	else {
		for (int i = 0; i < st1.length(); i++) {
			string rem = st1.substr(0, i) + st1.substr(i+1);
			
			permutation(prefix + st1.at(i),rem,st2);
		}
	}
}


int main(void) {

	string str1= "change";
	string str2 = "zx";


	permutation("", str1,str2);
	permutation("", str2, str1);
	return 0;
}

