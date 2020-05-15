#include <iostream>
#include <vector>
using namespace std;





struct Node {
	int data;
	Node* next;

	Node(int d) : data{ d }, next{ nullptr }{};
};


void insert(Node* &head,int num) {
	Node* newnode = new Node(num);

	newnode->next = head;
	head = newnode;

}

void printList(Node* head, vector<int> &temp) {
	
	while (head) {
		temp.push_back(head->data);
		cout << head->data << "-->";
		head = head->next;
	}
	cout << "nullptr" << endl;
}
void checkparlindrome(Node* head, vector<int> &temp) {


	if (head == nullptr) {
		return;
	}

	checkparlindrome(head->next, temp);
	temp.push_back(head->data);
	
}


int main() {
	vector<int> ans1;
	vector<int> ans2;

	Node* head = nullptr;
	/*
	for (int i = 0; i < 7; i++) {

		insert(head, i);
	}

	*/


	insert(head, 1);
	insert(head, 1);
	insert(head, 0);
	insert(head, 0);
	insert(head, 1);
	insert(head, 1);
	printList(head, ans1);
	checkparlindrome(head, ans2);

	cout << "check1 " << endl;

	for (int i = 0; i < ans1.size(); i++) {
		cout << ans1[i] << "-->";
		
	}
	cout << endl;
	cout << "check2 " << endl;
	for (int i = 0; i < ans2.size(); i++) {
		cout << ans2[i] << "-->";

	}



	for (auto it = ans1.begin(); it != ans1.end(); it++) {
		if (ans1[*it] != ans2[*it]) {
			cout << "false" << endl;
			break;
		}

	}
	cout << "true" << endl;


	return 0;
}