#include<iostream>
using namespace std;


class Node {
public:
	Node* left;
	int data;
	Node* right;

	Node(int d) : data{ d }, left{ NULL }, right{ NULL }{};
};

bool isBST(Node* root, int min, int max) {
	if (root == NULL) {
		return true;      
	}
	if (root->data < min || root->data > max) {
		return false;
	}

	return (isBST(root->left, min, root->data-1) && isBST(root->right, root->data-1, max));
}


int main() {
	Node* root = new Node(4);
	root->left = new Node(3);
	root->right = new Node(1);
	root->left->right = new Node(5);
	root->left->left = new Node(8);

	bool ans = true;
	if (root == NULL) {
		return true;
	}
	cout << isBST(root, INT_MIN, INT_MAX) << endl;
	return isBST(root, INT_MIN, INT_MAX);


}

