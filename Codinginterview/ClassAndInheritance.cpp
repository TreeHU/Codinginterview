#include<iostream>
using namespace std;

#define NAME_SIZE 50

class Person {
	int id;
	
	char name[NAME_SIZE];
	
public:

	~Person() {
		cout << "°´Ã¼°¡ ¼Ò¸êµË´Ï´Ù." << endl;
	}


	virtual void aboutMe() {
		//cout << "I am a person";
	}

	void age() {
		cout << "my age is age" << endl;
	}
};

class Student : public Person {
public:
	void aboutMe() {
		cout << "I am a student";
	}

};

int main() {
	

	Person* a = new Person();
	Student* s = new Student();
	a->aboutMe();
	s->aboutMe();

	delete a;

	return 0;
}