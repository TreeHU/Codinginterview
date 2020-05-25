#include <iostream>
using namespace std;



struct Node {
	int data;
	Node* left;
	Node* right;
	Node(int d) : data{ d }, left{ NULL }, right{ NULL }{}
};




bool match(Node* root1, Node* root2) {
	if (root1 == NULL && root2 == NULL) {
		return true; // 동시 종결일 경우 true를 리턴한 뒤 right가 맞는지 확인 
	}
	else if (root1 == NULL || root2 == NULL) {
		return false;
	}
	else if (root1->data != root2->data) {
		return false;
	}
	else {
		return match(root1->left, root2->left) && match(root2->right, root2->right);
	}

}

bool subtree(Node* root1, Node* root2) {

	if (root1 == NULL) {
		return false;
	}
	else if (root1->data == root2->data && match(root1, root2)) {
		return true;
	}

	return subtree(root1->left, root2) || subtree(root1->right, root2);
}

bool containsTree(Node* root1, Node* root2) {
	if (root2 == NULL) {
		return true;
	}
	return subtree(root1, root2);
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
	root2->right = new Node(10);


	bool ans = containsTree(root, root2);


	cout << "ans: " << ans << endl;

	return 0;
}