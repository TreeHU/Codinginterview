#include <iostream>
#include <vector>
#include <utility>
using namespace std;




bool findRoute(vector<vector<int>> arr, int row, int col,vector<pair <int,int> > ans) {
	pair<int, int> p;
	if (row < 0 || col < 0 || !arr[row][col]) {
		return false;
	}
	bool isAtOrigin = (row == 0) && (col == 0);
	if (isAtOrigin || findRoute(arr, row-1, col, ans) || findRoute(arr, row, col-1,ans)) {
		p = make_pair(row, col);
		ans.push_back(p);
		return true;
	}   
	return false;

}

vector<pair<int,int>> findRoute(vector< vector<int> > arr) {
	vector<pair<int, int>> ans;
	if (arr.size() == 0 || arr[0].size() == 0) {
		pair<int, int> p;
		p = make_pair(NULL, NULL);
		
		ans.push_back(p);
		return ans;
	}

	int rowlen = arr.size();
	int collen = arr[0].size();
	int x, y = 0;

	findRoute(arr, rowlen-1, collen-1, ans);

}

int main() {

	//findroute(arr[][]);




	return 0;

}