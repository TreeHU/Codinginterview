#include<iostream>
#include <string>
using namespace std;


int getcindex(char c) {
	int idx = 0;
	
	return idx;
}

string append(string st){
	char c = '\0';
	int count = 0;
	string ans = "";



	for (int i = 0; i < st.size(); i++) {
		if (i == 0) {
			count++;
		}
		else {



			if (st[i - 1] == st[i]) {
				count++;
			}
			else {
				ans += st[i - 1];
				ans += to_string(count);
				count = 1;
			}

			if (st[i + 1] == '\0') {
				ans += st[i - 1];
				ans += to_string(count);
			}

		}

	}


	return st.size() >= ans.size() ? ans : st;

}


int main() {
	cout << append("aabccccaaa") << endl;
	return 0;
}