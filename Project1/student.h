#include "main.h"

class Student {
public:
	string name;
	int age;
	double mark;
	bool alive;

	string getString() {

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
