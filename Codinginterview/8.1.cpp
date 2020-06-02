#include<iostream>
using namespace std;

// 하양식 방법으로 생각할 때 아이가 딛는 마지막 계단은 무엇인가
// 100번째 계단 전까지 올라오는 경우의 수를 알고 있다면 100번째 계단에 
// 오른 갯수를 알 수 있는가


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