#include<iostream>
using namespace std;


typedef struct Node {
	int data;
	struct Node* next;

};


int main() {
	Node* head = NULL;
	Node* tail = NULL;
	Node* cur = NULL;

	Node* newNode = NULL;
	int readData;

	while (1) {

		cin >> readData;

		if (readData < 1) {
			break;
		}
		newNode = new Node();
		newNode->data = readData;

		if (head == NULL) {
			head = newNode;
		}
		else {
			tail->next = newNode;
		}

		tail = newNode;

	}

	cout << "저장 데이터 전체 출력" << endl;

	if (head == NULL) {
		cout << "저장 데이터 없음" << endl;
	}
	else {
		cur = head;
		while (1) {
			
			if (cur == NULL) {
				break;
			}
			cout << cur->data << endl;
			cur = cur->next;
			

		}
	}

	if (head == NULL) {
		return 0;
	}
	else {
		Node* delNode = head;
		Node* delNextNode = head->next;

		cout << head->data << " 을 삭제합니다" << endl;
		free(delNode);

		while (delNextNode != NULL)
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			cout << delNode->data << " 을 삭제합니다" << endl;
			free(delNode);
		} 
	}

	
	return 0;
}