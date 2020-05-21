#include<iostream>
#include <vector>
using namespace std;


struct Node {

	int data;
	Node* next;
	Node(int d) : data{ d }, next{ nullptr }{};
};



Node * findInter(Node* &root1, Node* &root2, vector<Node *> &address) {
	//cout <<"check"<< root1->data << "-->";
	/*
		while (root1) {
			cout << " root1:" << root1 << endl;
			address.push_back(root1);
			root1 = root1->next;
			
		}

		*/
		while (root1) {
			cout << " root1:" << root1 << endl;
			
			if (root1->next == NULL) {
				address.push_back(root1);
			
			}
			root1 = root1->next;

		}
	
		while (root2) {
			for (int i = 0; i < address.size(); i++) {
				if (root2 == address[i]) return root2;
			}
			root2 = root2->next;
		}

		return NULL;
}




int main() {

	Node* root1 = new Node(1);
	root1->next = new Node(2);
	root1->next->next = new Node(3);
	Node* inter = new Node(4);
	root1->next->next->next = inter;
	inter->next = new Node(5);

	Node* root2 = new Node(10);
	root2->next = new Node(20);
	root2->next->next = new Node(30);
	root2->next->next->next = inter;
	vector<Node* > address;
	
	cout << root1->data << "-->";
	cout << root1->next->data << "-->";
	cout << root1->next->next->data << "-->";
	cout << root1->next->next->next->data << "-->";
	cout << root1->next->next->next->next->data << "-->";
	cout<<"" << endl;

	cout << root2->data << "-->";
	cout << root2->next->data << "-->";
	cout << root2->next->next->data << "-->";
	cout << root2->next->next->next->data << "-->";
	cout << "" << endl;


	if (root1 == root2) {
		cout << "root1 == root2" << endl;
		return 0;
	}
	 Node * ans = findInter(root1, root2, address);
	 cout << "ans:" << ans->data << endl;


	return 0;
}

