#include <iostream>
#include <vector>
#include <unordered_map>
#include <random>
using namespace std;


/*
typedef struct Node {
	int data = 0;
	Node* next = NULL;
};


void insert(Node* head, int data) {
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = head;



}


int main(void) {

	Node* head = NULL;
	Node* node2 = NULL;
	Node* node3 = NULL;
	Node* tail = NULL;

	head->data = 1;
	node2->data = 2;
	node3->data = 3;
	tail->data = 4;


	head->next = node2;
	node2->next = node3;
	node3->next = tail;

	Node * newNode = new Node();
	vector<int> array;

	newNode = head;
	while (1) {
		cout << newNode->data << endl;
		head->next  = newNode;




	return 0;
}
*/

//ÇØ¼³

struct Node {
	int data = 0;
	Node* next = nullptr;
};


















void insert(Node * &head, int data) {
	Node* newNode = new Node;
	cout << "newNode:" << newNode << endl;
	cout << "head:" << head << endl;
	cout<<' ' << endl;
	newNode->data = data;
	newNode->next = head;
	cout << "newNode:" << newNode << endl;
	cout << "head:" << head << endl;
	cout << ' ' << endl;
	head = newNode;
	cout << "newNode:" << newNode << endl;
	cout << "head:" << head << endl;
	cout << ' ' << endl;

	cout << "newNode->next:" << newNode->next << endl;
	cout << "head->next:" << head->next << endl;
	cout << ' ' << endl;
}








void printList(Node* head) {
	while (head) {
		//cout << "&head;" << head << endl;
		//cout << "&head: " << head << ":" << head->data << "-->";
		head = head->next;
	}
	cout << "nullptr" << endl;
}


static inline int random_range(const int min, const int max) {
	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> distribution(min, max);
	return distribution(mt);
}

//oid delduclicate(Node)

void removeDuplicates(Node* head) {
	if (head == nullptr || (head && (head->next == nullptr))) {
		return;
	}
	Node* curr = head;
	while (curr) {
		Node* runner = curr;
		while (runner->next != nullptr) {
			cout << "runner->next->data:" << runner->next->data << endl;
			cout << "curr->data:" << curr->data << endl;
			if (runner->next->data == curr->data) {
				
				runner->next = runner->next->next;
			}
			else {
				runner = runner->next;
			}
		}
		curr = curr->next;
	}
}
/*
void removeDuplicates1(Node* head) {
	if(head == nullptr || (head && ))
}
*/




int main() {
	Node* head = nullptr;
	/*
	for (int i = 0; i < 10; ++i) {
		insert(head, random_range(1, 7));
	}
	printList(head);

	*/
	cout << head << endl;
	insert(head, 1);
	insert(head, 2);
	insert(head, 2);
	//insert(head, 4);
	printList(head);
	//removeDuplicates(head);
	//printList(head);
	return 0;
}