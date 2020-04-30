#include <iostream>
#include <string>
#include <vector>

using namespace std;


/* Ǯ�� ���ڿ��� �ߺ��� �ִ��� Ȯ���ϴ� ����

// �ð� ���⵵ O(n^2), ���� ���⵵ O(1)
bool main() {


	string st = "ccddjj";
	int cnt = 0;


	for (int i = 0; i < st.length(); i++) {
		for (int j = i+1; j < st.length(); j++) {
		
			if( st[i] - st[j] ==0){
				cnt++;
			}
		}
	}
	cout << cnt << endl;
	
	if (cnt) {
		return false;
	}

	return true;

}*/


// �ؼ�
// �ð� ���⵵ O(1), ���� ���⵵ O(1)
bool isUniqueChars(const string &str) {
	if (str.length() > 128) {
		return false;
	}
	vector<bool> char_set(128);
	for (int i = 0; i < str.length(); i++) {
		int val = str[i];
		cout << val << endl;
		if (char_set[val]) {
			return false;
		}
		char_set[val] = true;

	}

	return true;
}

bool main() {
	string st = "asdfgaa";
	bool result = "";
	result = isUniqueChars(st);

	cout << result << endl;
}

                                                 