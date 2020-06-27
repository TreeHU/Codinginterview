#include <iostream>
using namespace std;



class Person {
public:
	virtual ~Person() {
		cout << "Delete a person" << endl;
	}
};

class Student : public Person {
public:
	~Student() {
		cout << "Delete a student" << endl;
	}
};


int main() {

	Person* p = new Student();
	delete p;

	return 0;
}