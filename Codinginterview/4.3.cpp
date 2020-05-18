#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




struct Node {
	int data;
	Node* left;
	Node* right;
	Node(int d) : data{ d }, left{ NULL }, right{ NULL } {}
};


void preOrder(Node* node,int depth)
{
	if (node == NULL)
		return;

	depth++;
	int maxdepth = max(maxdepth, depth);


	cout << node->data << " ";
	preOrder(node->left, maxdepth);
	preOrder(node->right, maxdepth);
}



Node* createMinimal(vector<int> arr, int low,int high) {

	if (low > high) {
		return NULL;
	}

	int mid = (high + low) / 2;
	Node* node = new Node(arr[mid]);
	node->left = createMinimal(arr, low, mid - 1);
	node->right = createMinimal(arr, mid + 1, high);
	return node;

}



Node* createMinimal(vector<int> arr) {
	if (arr.size() == 0) {
		return NULL;
	}

	return createMinimal(arr, 0, ((int)arr.size()) -1 );
}

int height(Node* root) {
	if (root == NULL) {
		return 0;
	}
	else {
		int l_height = height(root->left);
		int r_height = height(root->right);
		return max(l_height, r_height) + 1;
	}

}


void printGivenLevel(Node* root, int level) {
	if (root == NULL) {
		return;
	}
	if (level == 1) {
		cout << root->data << " ";
	}
	else if (level > 1) {
		printGivenLevel(root->left, level - 1);
		printGivenLevel(root->right, level - 1);
	}

}



void printLevelOrder(Node* root) {

	int h = height(root);
	//cout << "h: " << h << endl;

	for (int i = 1; i <= h; i++) {
		printGivenLevel(root, i);
		cout << endl;
	}
}


int main() {
	int A[] = { 1,2,3,4,5,6,7 };
	int depth = 0;
	vector<int> arr(A, A + sizeof(A) / sizeof(A[0]));
	Node* root = createMinimal(arr);






	cout << "\nPreOrder Traversal of constructed BST : ";
	preOrder(root,depth);
	cout << " " << endl;
	printLevelOrder(root);


	return 0;
}