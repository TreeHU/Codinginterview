#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;
#define HASHMAX 10000
#define a 1


//#44 해시테이블을 사용해 보라
//#117 비트 벡터가 유용한가?
//#132 0(NlogN) 시간에 풀 수 있겠는가? 그 해법은 어떤 것 인가?

//해시 구현

int hash_table[HASHMAX];

int _strlen(char* input) {
	int i = 0;
	while (input[i] != '\0')
		i++;
	return i;
}

int split(char* str) {
	int ret = 0;
	int len = _strlen(str);
	for (int i = 0; i < len; i++) {
		//ret += static_cast<int>(str[i]);
		ret += str[i] - '0';
	}
	return ret;
}

void basic_makeHash() {
	while (1) {
		char key[10];
		int value;

		cout << "key ::";
		cin >> key;
		cout << "value ::";
		cin >> value;

		int hashKey = split(key);

		if (!hash_table[hashKey]) {
			hash_table[hashKey] = value;
			cout << "key :: " << key << " -> " << hashKey << " value :: " << value << " 완료 " << endl;

		}
		else {
			cout << "이미 hash_table에 입력한 key가 존재합니다." << endl;
			cout << "이미 존재하는 key :: " << hashKey << " value :: " << value << endl;
			break;

		}
		cout << endl;
	}


}


void tosolve_collision() {

	while (1) {
		int key, value;
		cout << "key ::";
		cin >> key;
		cout << "value ::";
		cin >> value;

		int hashKey = (a * key) % HASHMAX;
		if (!hash_table[hashKey]) {
			hash_table[hashKey] = value;
			cout << "key :: " << key << " -> " << hashKey << " value :: " << value << " 완료 " << endl;
		
		}
		else {
			cout << "이미 hash_table에 입력한 key가 존재합니다." << endl;
			cout << "이미 존재하는 key :: " << hashKey << " value :: " << value << endl;
			break;

		}
		cout << endl;

	}


}


//typedef pair<int, int> pii;
//vector<pii> hash_table[HASHMAX];
void chaining() {



}

bool checkoverlab(string st) {
	if (st == "") {
		return true;
	}
	int i = 0;
	while (1) {
		if (i == st.size()) {
			cout << "중복  없넴" << endl;
			return true;
		}
		if (!hash_table[st[i] - '0']) {
			hash_table[st[i] - '0'] = st[i] - '0';
		}
		else {
			cout << "중복 있넴" << endl;
			return false;
		
		}
		i++;
	}
	cout << "중복  없넴" << endl;
	return true;
}

int main() {

	// 입력 문자의 아스키코드 총합을 키값으로 해시 테이블을 만들지만 충돌 일어남
	//basic_makeHash();

	// 임의로 해결하긴 했지만 충돌의 가능성이 있음
	//tosolve_collision();

	//체이닝 기번
	//chaining();

	string st = "heloo";
	bool ans = checkoverlab(st);




	return 0;
}