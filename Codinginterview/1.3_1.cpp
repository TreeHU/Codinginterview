#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#define LEN 10;
// 문자열 끝에서 시작해서 앞으로 읽어 나가면서 수정하는 것이 가장 쉽다. 
// 공백을 셀 수 있는가



char* function(char arr[], int truelen) {
	int count = 0;
	for (int i = 0; i < truelen; i++) {
		if (arr[i] == ' ') {
			count++;
		}
	}
	int index = count * 2 + truelen;
	arr[index] = '\0';
	//int cur = index - 1;
	for ( int i = truelen-1;i >=0; i--)
	{
		if (arr[i] == ' ') {
			arr[index - 3] = '%';
			arr[index - 2] = '0';
			arr[index - 1] = '2';
			index = index - 3;
		}
		else {
			arr[index - 1] = arr[i];
			index--;
		}

	}
	return arr;
}


// char 배열 초기화
// 만약 배열의 갯수를 지정하였다면 배열에 문자를 넣은 후에는 끝에 값을 자동으로 '\0'을 넣어줌
// 이는 " "의 문자열 상수를 통하여 배열을 초기화해준 것과 같은 효과 
//ex) char a[] = "ABC -> 실제로 ABC\0 이 저장, c[100] = {'A', 'B', 'C'} -> {'A', 'B', 'C', '\0'} 과 같다

int main() {
	char c[100] = " Hello w orl d";
	char * ans;
	ans = function(c, strlen(c));
	cout << ans << endl;
	return 0;
}
