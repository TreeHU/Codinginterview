#include<iostream>
using namespace std;


void foo(int*& ptr) {
	cout <<"ptr" << ptr << endl; 
	cout << "&ptr:" << &ptr << endl;
	cout << "*&ptr" << *&ptr << endl;

	cout << "**&ptr" << **&ptr << endl;
}

void main() {
	int x = 5;
	int* ptr = &x;
	cout << "ptr:" << ptr << endl;
	cout << "&x:" << &x << endl;
	cout <<"&ptr: " << &ptr << endl;

	foo(ptr);

}