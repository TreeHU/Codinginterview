#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
	Node(int x) : data(x), left(NULL), right(NULL) {}
};





int main() {
	
	int A[] = { 1, 2, 3, 4, 5, 6, 7 };

	vector<int> arr(A, A + sizeof(A) / sizeof(A[0]));

	cout <<arr[1] << endl;

	

	return 0;
}