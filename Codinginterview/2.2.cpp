#include<iostream>
#include<algorithm>
using namespace std;



struct Node {
	int data;
	Node *next;
	Node(int d) : data{ d }, next{ nullptr }{};
};


void insert(Node* &head, int data) {
	Node* newNode = new Node(data);
	newNode->next = head;
	head = newNode;

}
void deleteList(Node*& head) {
	Node* nextNode;
	while (head) {
		nextNode = 
	}
}



int main(void) {
	Node* head = nullptr;

	insert(head, randam(1, 7));


	return 0;
}