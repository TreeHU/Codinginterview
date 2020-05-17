#include <iostream>
#include <stack>
#include <vector>
using namespace std;





vector <stack<int>* > vec;

void stack_init() {
	stack<int>* s = new stack<int>;
	stack<int>* k = new stack<int>;
	vec.push_back(s);
	vec.push_back(k);
}


void stack_push(int num) {
	
	
	stack<int>* s = vec[0];
	s -> push(num);


}

void stack_pop() {
	stack<int>* s = vec[0];
	stack<int>* k = vec[1];
	
	while (!s->empty()) {
		k->push(s->top());
		s->pop();
	}

	while (!k->empty()) {
		cout << k->top() << endl;
		k->pop();
	}
}




int main() {
	stack<int> * first = new stack<int>;
	stack<int>* second = new stack<int>;

	stack_init();

	stack_push(5);
	stack_push(4);
	stack_push(3);
	stack_push(2);
	stack_push(1);
	stack_push(0);

	stack_pop();







	return 0;
}