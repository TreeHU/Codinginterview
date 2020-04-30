#include<iostream>
#include<string>
#include<algorithm>

using namespace std;



//순열 확인

/*풀의
bool permutation(string prefix, string st1,string st2) {
		
	

	if (st1.length() == 0) {
		//cout << prefix << endl;
		if (prefix.compare(st2) == 0) {
			return true;
		}
		else {
			return false;
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
	bool result1 = "";
	bool result2 = "";


	result1 = permutation("", str1,str2);
	result2 = permutation("", str2, str1);

	cout <<"result1:"<< result1 << endl;
	cout << result2 << endl;
	return 0;
}

*/

//해설


bool permutationcheck(string str1, string str2) {
	if (str1.length() != str2.length()) return false;

	sort(str1.begin(), str1.end());
	sort(str2.begin(),str2.end());

	if (str1.compare(str2)) {
		return false;
	}
	else {
		return true;
	}

	
}

bool permutationcheck2(string str1, string str2) {
	if (str1.length() != str2.length()) return false;

	int count[256] = { 0 };

	for (int i = 0; i < str1.length(); i++) {
		int val = str1[i];
		count[val]++;
	}

	for (int i = 0; i < str2.length(); i++) {
		int val = str1[i];
		count[val]--;
	
		if (count[val] < 0) {
			return false;
		}

	}

	return true;
}








int main() {
	string st1 = "asd";
	string st2 = "asd";
	bool result = "";
	result = permutationcheck(st1, st2);
	cout << "result:" << result << endl;
	return 0;
}