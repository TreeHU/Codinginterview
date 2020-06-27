#include<iostream>
using namespace std;



class Node {
public:
	int data = 0;
	Node* left;
	Node* right;

	Node(int d) : data{ d } {};
};

Node* copyfunc(Node* temp, Node* root) {
	temp = root;
	return temp;
}


int main() {
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);

	Node* temp = new Node(0);
	temp = copyfunc(temp, root);
	cout << temp->left->data << endl;
	
	
	return 0;

}