#include <iostream>
#include <cctype>
using namespace std;


//��� ������ ������ �ʿ䰡 ����
//� ���ڿ��� ȸ���� ������ �� �� Ư���� �����ΰ�
//�ؽ� ���̺� o(N)
//��Ʈ ���͸� ����ؼ� ������ ���� �� �ִ°�


bool checkPallrondrom(string st) {
	int arr[128] = { 0, };
	int charCount = 0;

	for (int i = 0; i < st.size(); i++) {
		if (st[i] == ' ') {
			
		}
		else {
			charCount++;
			arr[st[i] - '0']++;
		}
	}
	cout << "cou: " << charCount << endl;
 	for (int y = 0; y < 128; y++) {
		cout << "arr: " << arr[y] << endl;
	}

	if (charCount % 2) {
		int count = 0;
		for (int j = 0; j < 127; j++) {
			
			if (arr[j] > 3) {
				return false;
			}
			if (arr[j] == 1) {
				count++;
			}

		}
		if (count != 1) {
			return false;
		}
		return true;
	}
	else {
		cout << "debug1" << endl;
		for (int k = 0; k < 127; k++) {
			
			if (arr[k] != 0) {
				if (arr[k] != 2) {
					cout << "check:" << arr[k] << endl;
					return false;
				}
			}
		}
		return true;
	}


	return true;
}



int main() {
	cout << sizeof(string) << endl;


	string st = "Tacght toa";
	for (int i = 0; i < st.size(); i++) {
		st[i] = tolower(st[i]);
	}


	bool ans = checkPallrondrom(st);
	cout << ans << endl;





	return 0;
}