#include <iostream>
#include <cctype>
#include <bitset>
using namespace std;


//모든 순열을 생성할 필요가 없음
//어떤 문자열이 회문의 순열일 때 그 특성은 무었인가
//해시 테이블 o(N)
//비트 벡터를 사용해서 공간을 줄일 수 있는가


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


int bitvector(string st) {
	int count = 0;
	bitset<128> bit;
	//int bit = 0; // bitset 이용
	int forbit = 0;
	int arr[127] = { 0, };
	for (int i = 0; i < st.size(); i++) {
		if (st[i] == ' ') {
			
		}
		else {
			count++;
		}
	}
	if (count % 2) {
		//홀수 
		
		int oddindex = 0;
		for (int j = 0; j < st.size(); j++) {
			if (st[j] == ' ') {

			}
			else {
				arr[st[j] - '0']++;
			}
		}
		for (int k = 0; k < 128; k++) {
			if (arr[k] == 1) {
				oddindex = k;
			}
		}

		for (int n = 0; n < 128; n++) {
			if (arr[n] > 0) {
				bit |= (1 << n) ;
			}
		}

		forbit |= (1 << oddindex);

		if ((bit &  (forbit - 1))) {
			return false;
		}
		return true;

	}
	else {
		//짝수
		for (int j = 0; j < st.size(); j++) {
			if (st[j] == ' ') {

			}
			else {
				arr[st[j] - '0']++;
			}
		}
		for (int k = 0; k < 128; k++) {
			if (arr[k] % 2) {
				return false;
			}
		}

		return true;
	}




}




int main() {
	cout << sizeof(string) << endl;


	string st = "Tacght toa";
	for (int i = 0; i < st.size(); i++) {
		st[i] = tolower(st[i]);
	}


	//bool ans = checkPallrondrom(st);
	
	
	//cout << ans << endl;





	return 0;
}