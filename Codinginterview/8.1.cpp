#include<iostream>
using namespace std;

// �Ͼ�� ������� ������ �� ���̰� ��� ������ ����� �����ΰ�
// 100��° ��� ������ �ö���� ����� ���� �˰� �ִٸ� 100��° ��ܿ� 
// ���� ������ �� �� �ִ°�


//f(1) = 1



int countWays(int n, int* arr) {
	if (n < 0) {
		return 0;
	}
	else if (n == 0) {
		return 1;
	}
	else if (arr[n] > -1) {
		return arr[n];
	}

	else {
		arr[n] = countWays(n - 1, arr) + countWays(n - 2, arr) + countWays(n - 3, arr);
		return arr[n];
	}
}

int countWays(int n) {
	int* memo = new int[n];

	for (int i = 0; i < n; i++) {
		memo[i] = -1;
	}
	return countWays(n, memo);
}



int main() {
	
	cout << countWays(30) << endl;


	return 0;
}