#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;
#define HASHMAX 10000
#define a 1


//#44 �ؽ����̺��� ����� ����
//#117 ��Ʈ ���Ͱ� �����Ѱ�?
//#132 0(NlogN) �ð��� Ǯ �� �ְڴ°�? �� �ع��� � �� �ΰ�?

//�ؽ� ����

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
			cout << "�ߺ�  ����" << endl;
			return true;
		}
		if (!hash_table[st[i] - '0']) {
			hash_table[st[i] - '0'] = st[i] - '0';
		}
		else {
			cout << "�ߺ� �ֳ�" << endl;
			return false;
		
		}
		i++;
	}
	cout << "�ߺ�  ����" << endl;
	return true;
}

int main() {

	// �Է� ������ �ƽ�Ű�ڵ� ������ Ű������ �ؽ� ���̺��� �������� �浹 �Ͼ
	//basic_makeHash();

	// ���Ƿ� �ذ��ϱ� ������ �浹�� ���ɼ��� ����
	//tosolve_collision();

	//ü�̴� ���
	//chaining();

	string st = "heloo";
	bool ans = checkoverlab(st);




	return 0;
}