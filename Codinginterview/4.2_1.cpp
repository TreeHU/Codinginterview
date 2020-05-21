#include <iostream>
#include <vector>
using namespace std;



struct Node {
	int data;
	Node* left;
	Node* right;

	Node(int d) : data{ d }, left{ NULL }, right{ NULL } {};

};


void preOrder(Node* node) {
	if (node == NULL) {
		return;
	}
	cout << node->data << " ";
	preOrder(node->left);
	preOrder(node->right);
}

Node *  makeTree(vector<int> V, int start, int end) {
	if (start > end) {
		return NULL;
	}
	int mid = (start + end) / 2;
	Node* root = new Node(V[mid]);

	root->left = makeTree(V, start, mid - 1);
	root->right = makeTree(V, mid + 1, end);
	
	return root;

}



Node * makeTree(vector<int> V) {
	if (V.size() == 0) {
		return NULL;
	}
	
	return makeTree(V, 0, int (V.size()) -1 );

}



int main() {
	int arr[] = { 1,2,3,4,5,6,7 };
	vector<int> V(arr, arr + sizeof(arr) / sizeof(arr[0]));
	Node * root = makeTree(V);
	preOrder(root);



	return 0;
}