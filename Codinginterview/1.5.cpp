#include <string>
#include<iostream>
using namespace std;



string zip(string st) {
	string copy = "";
	int cnt = 1;
	copy += st[0];
	for (int i = 0; i < st.length(); i++) {
		if (st[i] == st[i + 1]) {
			cnt++;
		}
		else {
			copy += to_string(cnt);
			cnt = 1;
			copy += st[i + 1];
		}
	}


	return copy;
}



int main() {
	string str = "aabccccaaa";
	string result = "";

	result = zip(str);

	cout << result << endl;


	return 0;
}