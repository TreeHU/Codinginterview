#include <iostream>
using namespace std;

#define NAME_SIZE 50


class Person {
	int id;
	char name[NAME_SIZE];
public:
	virtual void aboutMe() {
		cout << "I am a person" << endl;
	}
	virtual bool addCourse(string s) = 0;

	~Person() {
		cout << "°´Ã¼°¡ ¼Ò¸êÇÕ´Ï´Ù" << endl;
	}

};

class Student : public Person {
public:
	void aboutMe() {
		cout << "I am a student" << endl;
	}

	bool addCourse(string s) {
		cout << "Added course " << s << " to student" << endl;
		return true;
	}
};

int main() {
	Person* p = new Student();
	
	p->aboutMe();
	p->addCourse("History");
	delete p;
}















/*
class Animal {
public:
	virtual void eat() {
		cout << "Im eating generic food" << endl;
	}
};

class Cat : public Animal {
public: 
	void eat() {
		cout << "Im eating a rat" << endl;
	}
};


void func(Animal* xyz) {
	xyz->eat();
}


int main() {

	Animal* animal = new Animal;
	Cat* cat = new Cat;

	func(animal);
	func(cat);




	return 0;
}
*/