#include <iostream>
#include <algorithm>
using namespace std;

//o(NlogN)�ð��� �ع��� �ϳ� ���� , �ٸ� �ع��� o(N) �ð��� �ɸ���.
//�ؽ� ���̺��� �����Ѱ�



//���� 
// ��ҹ��ڸ� �����ϴ°�, ���� ���ڴ� ��� ó���ؾ��ϴ°� 
bool check_nlogn(string a, string b) {
	if (a.size() != b.size()) {
		return false;
	}
	
	
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());
	
	//c++������ ���ڿ� �񱳽� ==���ε� ������, strcmp, compare�� ����
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