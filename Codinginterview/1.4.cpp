#include<iostream>
#include<string>

using namespace std;

void palindrome(string str) {
	string dump = "";
	//cout << str << endl;
	for (int i = 0; i < str.length()/2; i++) {
	
		dump = str.substr(i+1);
		if (str[i] != str[dump.length()]) {
			return;
		}
	}
	cout << "palindrome" << endl;
	cout << str << endl;
}


void permutation(string prefix, string str, int size) {
	//cout << "st2:" << str << endl;
	if (str.length()==0) {
		//cout << prefix << endl;
		if (prefix.length() == size) {
			//cout << prefix << endl;
			palindrome(prefix);
		}
	}

	for (int i = 0; i < str.length(); i++) {
		string rem = str.substr(0, i) + str.substr(i + 1);
		permutation(prefix + str.at(i), rem, size);
	}
}

int main() {
	string prefix = "";
	string st = "tact coa";
	int index = 0;
	while (st[index] != NULL) {
		if (st[index] == ' ') {
			string remainstr = st.substr(index+1);
			string prestr = st.substr(0, index);
			st = " ";
			st = remainstr + prestr;
			index--;

		}
		index++;
	}
	
	int size = st.length();


	//cout <<"st:"<< st << endl;
	permutation(prefix, st, size);

	return 0;
}
