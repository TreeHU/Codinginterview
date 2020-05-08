#include<iostream>
using namespace std;


struct Node {
	int data = 0;
	Node* next = nullptr;
};


void print(Node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->next;
 	}
	cout << "nullptr" << endl;
}
void insert(Node * head) {
	Node* newNode = new Node;
	newNode->data = 0;
	head->next = newNode;
	cout << head  << endl;
	head = newNode;






}


int main(void) {
	Node* node1 = new Node;
	Node* node2 = new Node;

	Node* head = new Node;
	node1->data = 1;
	node2->data = 2;


	node1->next = node2;
	head = node2;
	cout << head << ":" << node2 << endl;
	print(node1);
	insert(head);
	print(node1);


	return 0;
}