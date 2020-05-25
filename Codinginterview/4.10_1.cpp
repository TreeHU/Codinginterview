#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
	Node(int d) : data{ d }, left{ NULL }, right{ NULL }{}
};

void getOrderString(Node* root, string & arr) {
	if (root == NULL) {
		arr.append("X");
		return;
	}

	arr.append(to_string(root->data));
	getOrderString(root->left, arr);
	getOrderString(root->right, arr);
}



bool containsTree(Node* root1, Node* root2) {

	string arr1 = "";
	string arr2 = "";

	getOrderString(root1, arr1);
	getOrderString(root2, arr2);

	cout << "arr1:" << arr1 << endl;
	cout << "arr2:" << arr2 << endl;
	

	cout << "check: " << arr1.find(arr2) << endl;




	return arr1.find(arr2) != string::npos ? 1:0;
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


	bool ans = containsTree(root, root2);


	cout << "ans: " << ans << endl;

	return 0;
}


/*
string�� find �ɹ� �Լ��� �κ� ���ڿ��� �����ϴ��� Ȯ�����ִ� ����� �Ѵ�
s1.find(s2)�� ������ ���ڰ� �����Ѵٸ� s1�� s1�� s2�� ������ ���ڿ��� ���� �ε����� ��ȯ�Ѵ�.
���� ������ ���ڿ��� ���ٸ� long long ������ ū���� ��ȯ�Ѵ�. 

������ ���ڿ��� ���� ���ǹ��� string::npos�� ����Ѵ�. 




�ð� ���⵵ O(N+M)
���� ���⵵ 0(N+M)
N�� M�� ����� ����

*/

