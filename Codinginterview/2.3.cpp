#include <iostream>
using namespace std;



struct Node {
	int data;
	Node* next;
	Node(int d) : data{ d }, next{ nullptr }{};
};

void insert(Node* & head, int num) {
	Node* newnode = new Node(num);
	newnode->next = head;
	head = newnode;
	

}

void printList(Node * head) {
	
	while (head) {
		std::cout << head->data << "-->";
		head = head->next;
	}
	std::cout << "null" << std::endl;

}

// 풀의 
void midnodedel(Node *& head) {
	if (head == nullptr || head->next == nullptr) {
		return;
	}

	Node* curr = nullptr;
	curr = head;
	while (curr) {
		if (curr->next->data == 4) {
			curr->next = curr->next->next;
			break;
		}
		curr = curr->next;
	}
}


//해설
void deleteNode(Node* node) {
	if (node == nullptr || node->next == nullptr) {
		return;
	}
	Node* nextNode = node->next;
	node->data = nextNode->data;
	node->next = nextNode->next;
	delete nextNode;


}





int main() {

	Node* head = nullptr;
	for (int i = 7; i > 0; i--) {
		insert(head, i);
	};

	printList(head);
	//midnodedel(head);
	
	printList(head);



	/*
	Node* head = new Node('a');
	head->next = new Node('b');
	head->next->next = new Node('c');
	head->next->next->next = new Node('d');
	head->next->next->next->next = new Node('e');
	std::cout << "List before deletion:\n";
	printList(head);
	std::cout << "Deleting node containing data as 'c'\n";
	deleteNode(head->next->next);
	std::cout << "List after deletion:\n";
	printList(head);
	*/



	return 0;
}