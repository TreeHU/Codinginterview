#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;




struct Node {

	int data;
	Node* left;
	Node* right;
	Node(int d) : data{ d }, left{ NULL }, right{ NULL }{}

};


Node* makeTree(vector<int> arr,int low, int high) {

	if (low > high) {
		return NULL;
	}
	int mid = (low + high) / 2;
	Node* node = new Node(arr[mid]);
	node->left = makeTree(arr, low, mid - 1);
	node->right = makeTree(arr, mid + 1, high);

	return node;
}

void preOrder(Node* node) {
	if (node == NULL) {
		return;
	}
	cout << node->data << " ";
	preOrder(node->left);
	preOrder(node->right);
}

Node * makeTree(vector<int> arr) {
	if (arr.size() == 0) {
		return NULL;
	}

	int size = arr.size();
	
	return makeTree(arr, 0, size-1);
}


int getHeight(Node* root) {
	if (root == NULL) {
		return -1;
	}
	return max(getHeight(root->left), getHeight(root->right)) + 1;
}


bool isBST(Node* root, int min, int max) {
	if (root == NULL) {
		return true;
	}
	if (root->data < min || root->data > max) {
		return false;
	}

	return (isBST(root->left, min, root->data - 1) && isBST(root->right, root->data - 1, max));
}

bool validateBST(Node* root, int min, int max) {
	if (root == nullptr) {
		return true;
	}
	if (root->data < min || root->data > max) {
		return false;
	}
	return validateBST(root->left, min, root->data - 1) && validateBST(root->right, root->data - 1, max);
}

int main()
{
	int v[] = { 1,2,3,4,5,6,7 };
	vector<int> arr(v, v + sizeof(v) / sizeof(v[0]));
	

	Node * root = makeTree(arr);
	preOrder(root);
	cout <<"height:" << getHeight(root) << endl;
	cout << validateBST(root, INT_MIN, INT_MAX) << endl;
	return 0;

}