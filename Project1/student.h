#include "main.h"

class Student {
public:
	string name;
	int age;
	double mark;
	bool alive;

	//default-constructor or constructor without arguments
	Student() {
		//cout << "Default-constructor:/" << endl;
		name = "no name";
		age = 13;
		mark = 4.0;
		alive = true;
	}
	// constructor with arguments
	Student(string nm) {
		cout << "Constructor with arguments" << endl;
		name = nm;
		age = 13;
		mark = 4.0;
		alive = true;
	}
	// canonical-constructor 
	Student(string nm , int a , int m , bool al) {
		cout << "Constructor with arguments" << endl;
		name = nm;
		age = a;
		mark = m;
		alive = al;
	}
	// copy-constructor 
	Student(const Student& student) {
		cout << "Constructor with arguments" << endl;
		name = student.name;
		age = student.age;
		mark = student.mark;
		alive = student.alive;
	}
	//destructor
	~Student() {
		cout << "destructor:|" << endl;
	}

	string toString() {

		string s = "Name : " + name;
		s += "\nage : " + to_string(age);
		s += "\nmark : " + to_string(mark);
		s += "\nalive : ";
		s += (alive == true ? "yes" : "no");
		s += "\n";

		return s;
	}

};

//default is private
