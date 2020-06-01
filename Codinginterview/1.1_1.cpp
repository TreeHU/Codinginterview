#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;
#define HASHMAX 10000
#define a 1


//#44 �ؽ����̺��� ����� ����
//#117 ��Ʈ ���Ͱ� �����Ѱ�?
//#132 0(NlogN) �ð��� Ǯ �� �ְڴ°�? �� �ع��� � �� �ΰ�?

//�ؽ� ����



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


int hash_table1[HASHMAX];
void basic_makeHash() {

	while (1) {
		char key[10];
		int value;

		cout << "key ::";
		cin >> key;
		cout << "value ::";
		cin >> value;

		int hashKey = split(key);

		for (int k = 0; k < 100; k++) {
			cout << hash_table1[k] << endl;
		}


		if (!hash_table1[hashKey]) {
			hash_table1[hashKey] = value;
			cout << "key :: " << key << " -> " << hashKey << " value :: " << value << " �Ϸ� " << endl;

		}
		else {
			cout << "�̹� hash_table�� �Է��� key�� �����մϴ�." << endl;
			cout << "�̹� �����ϴ� key :: " << hashKey << " value :: " << value << endl;
			break;

		}
		cout << endl;
	}
}


void tosolve_collision() {
	int hash_table[HASHMAX];
	while (1) {
		int key, value;
		cout << "key ::";
		cin >> key;
		cout << "value ::";
		cin >> value;

		int hashKey = (a * key) % HASHMAX;
		if (!hash_table[hashKey]) {
			hash_table[hashKey] = value;
			cout << "key :: " << key << " -> " << hashKey << " value :: " << value << " �Ϸ� " << endl;
		
		}
		else {
			cout << "�̹� hash_table�� �Է��� key�� �����մϴ�." << endl;
			cout << "�̹� �����ϴ� key :: " << hashKey << " value :: " << value << endl;
			break;

		}
		cout << endl;

	}


}


void chaining() {

	typedef pair<int, int> pii;
	vector<pii> hash_table[HASHMAX];
	cout << "�ؽ� ���̺� ����\n" << endl;
	for (int i = 0; i < 6; i++) {
		int key, value;
		cout << "key::";
		cin >> key;
		cout << "value::";
		cin >> value;
		int hashKey = (a * key) % HASHMAX;

		if (hash_table[hashKey].size() == 0) {
			hash_table[hashKey].push_back({ key, value });
			cout << "key :: " << key << " -> " << hashKey << " value :: " << value << " �Ϸ� " << endl;

		}
		else {
			hash_table[hashKey].push_back({ key, value });
			cout << "key :: " << key << " -> " << hashKey << " value :: " << value << " �Ϸ�(�浹�� ��� �Ͼ���ϴ�.) " << endl;
		}
		cout << endl;
	}
	cout << "�ؽ� ���̺� Ž��" << endl;
	for (int i = 0; i < 6; i++) {
		int key;
		cout << "key::";
		cin >> key;

		int hashKey = key % HASHMAX;
		for (int j = 0; j < hash_table[hashKey].size(); j++) {
			if (hash_table[hashKey][j].first == key) {
				cout << "value::" << hash_table[hashKey][j].second << endl;
				break;
			}
		}
		
	}

}

bool checkoverlab(string st) {
	int hash_table1[100] ;

	if (st == "") {
		return false;
	}
	int i = 0;

	while (1) {
		if (i == st.size()) {
			cout << "�ߺ�  ����" << endl;
			return false;
		}
		
		if (!hash_table1[st[i] - 'a']) {
			hash_table1[st[i] - 'a'] = st[i] - 'a';
			cout << "hash:" << hash_table1[st[i] - 'a'] << endl;
		}
		else {
			cout << "�ߺ� �ֳ�" << endl;
			return true;
		
		}
		i++;
	}
	cout << "�ߺ�  ����" << endl;
	return false;
}


//��Ʈ���� ���
bool checkoverlabchar(string st) {
	if (st == "") {
		return false;
	}

	int bit = 0;
	for (int i = 0; i < st.size(); i++) {
		int check = st[i] - 'a';
		cout << check << endl;

		if ((bit & (1 << check)) > 0) {
			
			cout << "�ߺ� �ֳ�" << endl;
			return true;
		}
		bit |= (1 << check);
		cout <<"bit:"<< bit << endl; 
	}
	cout << "�ߺ�  ����" << endl;
	return false;




}

int binarysearch(string st, char c, int start, int end) {

	if (start > end) return 0;
	int mid = (start + end) / 2;

	if (st[mid] == c) {
		return 1;
	}

	return binarysearch(st, c, start, mid - 1) + binarysearch(st, c, mid + 1, end);

}
bool check(string st) {
	if (st == "") {
		return false;
	}
	int start = 0;
	int end = st.size() -1;
	
	for (int i = 0; i < end; i++) {

		if (binarysearch(st, st[i], start, end) > 1) {
			cout << "�ߺ� �ֳ�" << endl;
			return true;
		}
		
		
	}
	cout << "�ߺ� ����" << endl;
	return false;
}



bool isUniqueChars_noDS(string str) {
	sort(str.begin(), str.end());

	bool noRepeat = true;
	for (int i = 0; i < str.size() - 1; i++) {
		if (str[i] == str[i + 1]) {
			noRepeat = false;
			break;
		}
	}
	return noRepeat;
}






int main() {

	// �Է� ������ �ƽ�Ű�ڵ� ������ Ű������ �ؽ� ���̺��� �������� �浹 �Ͼ
	//basic_makeHash();

	// ���Ƿ� �ذ��ϱ� ������ �浹�� ���ɼ��� ����
	//tosolve_collision();

	//ü�̴� ���
	//chaining();

	string st = "ssss";
	//bool ans = checkoverlab(st);
	//checkoverlabchar(st);
	//checkoverlab(st);
	//cout << check(st) << endl;
	
	/*
	vector<string> words = { "abcde", "hello", "apple", "kite", "padle" };
	for (string word : words) {
		cout << word << string(": ") << boolalpha << isUniqueChars_noDS(word) << endl;
	}
	*/

	string ss = "jel";
	for (char c : ss) {
		cout << c << endl;
	}

	return 0;
}