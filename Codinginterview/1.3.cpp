#include<iostream>
#include<string>
#include<algorithm>
using namespace std;



//URL È­
/*
int main(void) {

	char str[13] = "change world";
	
	for (int i = 0; i < 20; i++) {
		if (str[i] == ' ') {
			swap(str[i],' ');
	}
	
	}

	return 0;
}
*/

//ÇØ¼³


void urlify1(char* st, int size) {
	int numofspace = 0;
	int i, j = 0;
	for (i = 0; i < size; ++i) {
		if (st[i] == ' ') {
			++numofspace;
		}
	}

	int extendedlen = size + numofspace * 2;
	i = extendedlen - 1;

	for (j = size - 1; j >= 0; --j) {
		if (st[j] != ' ') {
			st[i--] = st[j];
		}
		else {
			st[i--] = '0';
			st[i--] = '2';
			st[i--] = '%';
		}
	}

}



int main(void) {

	char str[] = "Mr John Smith    ";
	


	urlify1(str, 13);

	cout << str << endl;
}
