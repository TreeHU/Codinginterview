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
string의 find 맴버 함수는 부분 문자열이 존재하는지 확인해주는 기능을 한다
s1.find(s2)는 동일한 문자가 존재한다면 s1의 s1과 s2의 동일한 문자열의 시작 인덱스를 반환한다.
만약 동일한 문자열이 없다면 long long 형태의 큰수를 반환한다. 

동일한 문자열이 없는 조건문은 string::npos를 사용한다. 




시간 복잡도 O(N+M)
공간 복잡도 0(N+M)
N과 M은 노드의 갯수

*/

