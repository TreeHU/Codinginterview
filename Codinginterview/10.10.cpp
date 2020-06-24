#include <iostream>
using namespace std;



class Node {
public:
	Node* left;
	Node* right;
	int data;

};

Node* newNode(int x)
{
	Node* temp;
	temp = new Node;
	temp->data = x;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

Node * insert(Node* root, int x) {
	
	if (root == NULL) {
		return newNode(x);
	}
	else {
		Node* temp;
		temp = new Node;
		if (x <= root->data)
		{
			temp = insert(root->left, x);
			root->left = temp;
		}
		else
		{
			temp = insert(root->right, x);
			root->right = temp;
		}
		return root;
	}
}

Node* search(Node* root, int num) {
	if (num < root->data) {
		if (root->left == NULL) {
			return NULL;
		}
		else {
			search(root->left, num);
		}
	}
	else if (num > root->data) {
		if (root->right == NULL) {
			return NULL;
		}
		else {
			search(root->right, num);
		}
	}
	else {
		return root;
	}
}

int size(Node* root) {
	if (root == NULL) {
		return 0;
	}
	else {
		return size(root->left) + size(root->right) + 1;
	}
}

int RankOfNumber(Node* root, int n) {
	Node* temp = new Node();
	temp = search(root, n);
	if (temp->left == NULL) {
		return 0;
	}
	else {
		return size(temp->left);
	}
}



int main(void) {
	Node* root;
	root = new Node;
	root = NULL;
	root = insert(root, 20);
	root = insert(root, 15);
	root = insert(root, 25);
	root = insert(root, 10);
	root = insert(root, 23);
	root = insert(root, 5);
	root = insert(root, 13);
	root = insert(root, 24);
	cout << "Rank of " << 20 << ": " << RankOfNumber(root, 20) << endl;
	cout << "Rank of " << 15 << ": " << RankOfNumber(root, 15) << endl;
	cout << "Rank of " << 25 << ": " << RankOfNumber(root, 25) << endl;
	cout << "Rank of " << 10 << ": " << RankOfNumber(root, 10) << endl;
	cout << "Rank of " << 23 << ": " << RankOfNumber(root, 23) << endl;
	cout << "Rank of " << 5 << " : " << RankOfNumber(root, 5) << endl;
	cout << "Rank of " << 13 << ": " << RankOfNumber(root, 13) << endl;
	cout << "Rank of " << 24 << ": " << RankOfNumber(root, 24) << endl;
	
	
	return 0;
}

