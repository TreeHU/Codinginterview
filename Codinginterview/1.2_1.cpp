#include <iostream>
#include <algorithm>
using namespace std;

//o(NlogN)시간의 해법이 하나 존재 , 다른 해법은 o(N) 시간이 걸린다.
//해시 테이블이 유용한가



//문의 
// 대소문자를 구별하는가, 공백 문자는 어떻게 처리해야하는가 
bool check_nlogn(string a, string b) {
	if (a.size() != b.size()) {
		return false;
	}
	
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	//c++에서는 문자열 비교시 ==으로도 가능함, strcmp, compare도 가능
	if (a == b) {
		return true;
	}


	/*
	int i = 0;
	for (char c : a) {
		if (c != b[i]) {
			return false;
		}
		i++;
	}
	*/
	return true;
}

int arr1[128];
int arr2[128];
bool checkCount(string a, string b) {
	
	
	if (a.size() != b.size()) {
		return false;
	}

	for (int i = 0; i < a.size(); i++) {
		arr1[a[i]]++;
		arr2[b[i]]++;
	}
	for (int j = 0; j < a.size(); j++) {
		if (arr1[j] != arr2[j]) {
			return false;
		}
	}

	return true;

}




int main() {
	/*
	string a = "hellio";
	string b = "hello";
	cout << check_nlogn(a, b) << endl;
	*/
	int* ar = new int(10);




	cout << 'a' - '0' << endl;
	cout << static_cast<int> ('a') << endl;


	return 0;
}