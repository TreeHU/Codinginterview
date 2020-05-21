#include<iostream>
#include <vector>
using namespace std;

struct Node {

	int data;
	Node* left;
	Node* right;

	Node(int d) : data{ d }, left{ NULL }, right{ NULL }{}

};

vector<int> ar1, ar2;


void inorder(Node * node, vector<int> & arr){
	cout << "check traverser1" << endl;
	if (node == NULL) {
		return;
	}
	inorder(node->left,arr);
	arr.push_back(node->data);
	inorder(node->right,arr);

}

bool checktraverser(Node* r1, Node* r2) {
	inorder(r1, ar1);
	inorder(r2, ar2);

	cout << "check traverser2" << endl;
	if (ar1.size() != ar2.size()) {
		return false;
	}
	else {
		for (int i = 0; i < ar1.size(); i++) {
			if (ar1[i] != ar2[i]) {
				return false;
			}
		}
	}
	return true;
}

bool traverser(Node* root1, Node* root2) {
	cout << "check traverser3"<< endl;
	
	if (root1->data == root2->data) {
		if (checktraverser(root1, root2)) {
			return true;
		}
	}

	return traverser(root1->left, root2) || traverser(root1->right, root2);

}


int main() {
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->left->left = new Node(8);
	root->left->left->right = new Node(9);
	root->left->right = new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);


	Node* root2 = new Node(4);
	root2->left = new Node(8);
	root2->right = new Node(9);


	bool ans = traverser(root, root2);

	for (int k = 0; k < ar1.size(); k++) {
		cout <<"ar1:" << ar1[k] << "ar2:" << ar2[k] <<  endl;
	}


	cout <<"ans: "<< ans << endl;

	return 0;
}