#include<iostream>
#include<string>
#include<typeinfo>

using namespace std;

/*
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

*/


/* 1번째 풀의
bool isPermutationofpallindrome(const string& str) {
	int frequency[26] = { 0 };
	countFrequence( str, frequency);


	bool oddAppeared = false;


	return 0;
}
*/

int getCharIndex(char c) {
	int idx = -1;
	if (c >= 'a' && c <= 'z') {
		idx = c - 'a';
	}
	else if (c >= 'A' && c <= 'Z') {
		idx = c - 'A';
	}
	return idx;
}



void countFrequence(const string& str, int* frequ) {
	int idx;
	for (char c : str) {
		idx = getCharIndex(c);
	}
	if (idx != -1) {
		frequ[idx]++;
	}

}

bool isPermutationOfPallindrome2(const std::string& str)
{
	int oddCount = 0;
	int frequency[26] = { 0 };
	int idx = 0;
	for (const char& c : str)
	{
		idx = getCharIndex(c);
		if (idx != -1)
		{
			++frequency[idx];
			if (frequency[idx] % 2)
			{
				++oddCount;
			}
			else {
				--oddCount;
			}
		}
	}
	return (oddCount <= 1);
}



int main(void) {

	string str("Tact Coa");


	cout << isPermutationOfPallindrome2(str) << endl;



	return 0;
}