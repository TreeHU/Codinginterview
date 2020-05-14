#include <iostream>
using namespace std;



struct Node {

	int data;
	Node* next;

	Node(int d) : data{ d }, next{ nullptr }{};

};


void insert(Node*& head, int num) {
	Node* newnode = new Node(num);
	newnode->next = head;
	newnode->data = num;
	head = newnode;


}


void printList(Node* head) {
	while (head) {
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "null" << endl;
}

int sumList(Node* head, int i, int total) {

	while (head) {
		//cout << head->data << "-->";
		total += head->data * i;
		i = i * 10;
		head = head->next;
	}
	cout << total << endl;
	return total;
}

int sumList2(Node* head, int i, int total) {

	while (head) {
		//cout << head->data << "-->";
		total += head->data * i;
		i = i * 10;
		head = head->next;
	}
	cout << total << endl;
	return total;
}



int main() {

	Node* head = nullptr;
	Node* head1 = nullptr;
	int sum = 0;
	int i = 1;
	int totalsum = 0;

	int result1 =0, result2 =0;
	insert(head, 1);
	insert(head, 2);
	insert(head, 3);


	result1 = sumList(head, i, totalsum);


	insert(head1, 4);
	insert(head1, 5);
	insert(head1, 6);

	result2 = sumList(head1, i, totalsum);
	

	printList(head);



	return 0;
}