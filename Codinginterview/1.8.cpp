#include <iostream>
#include<vector>
#include <utility>
using namespace std;





vector< vector<int> > function(vector< vector<int> > matrix) {
	pair<int, int> p;
	vector<pair<int, int>> arr;

	int row = matrix[0].size();
	int col = matrix.size();

	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
		
			if (matrix[i][j] == 0) {
				arr.push_back(make_pair(i, j));// i는 열 j는 행
			}
		
		}
	}

	for (int k = 0; k < arr.size(); k++) {
		cout << arr[k].first << " : " << arr[k].second << endl;
	}


	
	for (int i = 0; i < arr.size(); i++) {

		int num1 = arr[i].first;
		int num2 = arr[i].second;

		for (int j = 0; j < col; j++) {
			matrix[j][num2] = 0;
		}
		for (int k = 0; k < row; k++) {
			matrix[num1][k] = 0;
		}
	}
	return matrix;
}







int main() {

	vector< vector<int> > arr = { {1,1,1,1,0},{1,1,1,0,1}, {1,0,1,1,0}, {1,1,1,1,1} };
	arr = function(arr);

	for (int i = 0; i < arr.size(); i++) {
		
		for (int j = 0; j < arr[0].size(); j++) {
			cout << arr[i][j] << ":" ;
		}
		cout << endl;
	}
	


	return 0;
}