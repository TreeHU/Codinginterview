#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#define LEN 10;
// ���ڿ� ������ �����ؼ� ������ �о� �����鼭 �����ϴ� ���� ���� ����. 
// ������ �� �� �ִ°�



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


// char �迭 �ʱ�ȭ
// ���� �迭�� ������ �����Ͽ��ٸ� �迭�� ���ڸ� ���� �Ŀ��� ���� ���� �ڵ����� '\0'�� �־���
// �̴� " "�� ���ڿ� ����� ���Ͽ� �迭�� �ʱ�ȭ���� �Ͱ� ���� ȿ�� 
//ex) char a[] = "ABC -> ������ ABC\0 �� ����, c[100] = {'A', 'B', 'C'} -> {'A', 'B', 'C', '\0'} �� ����

int main() {
	char c[100] = " Hello w orl d";
	char * ans;
	ans = function(c, strlen(c));
	cout << ans << endl;
	return 0;
}
