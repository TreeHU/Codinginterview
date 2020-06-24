#include <iostream>
using namespace std;








bool search(int matrix[][3], int row, int col, int target, int rowindex) {
	for (int i = 0; i < col; i++) {
		if (matrix[rowindex][i] == target) {
			return true;
		}
	}
	return false;
}






void search(int matrix[][3], int row, int col, int target) {

	int targetrow = -1;

	for (int i = 0; i < row; i++) {
		
		if ((matrix[i][0] <= target) && (matrix[i + 1][0] >= target)) {
			cout << search(matrix, 3,3,10, i) << endl;
		}
	}
	return;
}








int main(void) {

	int matrix[][3] = { {1,2,3},{4,5,6,},{7,8,9} };

	search(matrix, 3, 3, 10);

	return 0;
}