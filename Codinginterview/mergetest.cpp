#include <iostream> 
#include<cstdio>
using namespace std;


int h;
int w;
int matrix[500][500] = { 0 };

void input() {
	cin >> h >> w;

}

int main() {
	input();
	int stack;
	int flag = -1;
	int col = 0;
	int cnt = 0;


	for (int i = 0; i < w; i++) {
		cin >> stack;
		if (stack == 0) continue;
		int cnt = 0;
		for (int j = h-1; ; h--) {
			matrix[j][i] = 1;
			cnt++;

			if(cnt == stack) break;
		}
		
	}

	for (int j = n - 1; n >= 0; n--) {
		for (int i = 0; i < m; i++) {
			if (flag >= 0 && matrix[j][i] == 1) {
				cnt += (i - flag - 1);
				flag = -1;
			}
			else if (flag == -1 && matrix[j][i] == 1) {
				flag = i;
			}
		}
		flag = -1;
	}




	return cnt;

}