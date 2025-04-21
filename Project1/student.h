#include "main.h"

class Student {
public:
	string name;
	int age;
	int* marks;
	int countMark;
	bool alive;

	//default-constructor or constructor without arguments
	Student() {
		//cout << "Default-constructor:/" << endl;
		name = "no name";
		age = 13;
		marks = nullptr;
		countMark = 0;
		alive = true;
	}
	// constructor with arguments
	Student(string nm) : Student(nm, 13, 4.0 , true) {
		//cout << "Constructor with arguments" << endl;
		name = nm;
		age = 13;
		
		alive = true;
	}
	// canonical-constructor 
	Student(string name , int age , int countMark , bool alive) {
		///cout << "canonical-constructor " << endl;
		this->name = name;
		this->age = age;
		this->alive = alive;
		this->countMark = countMark;
		marks = new int[countMark] ;
		for (int i = 0; i < countMark; i++)
		{
			marks[i] = 4;
		}
	}
	// copy-constructor 
	Student(const Student& student) : Student (student.name, student.age,
		student.countMark, student.alive) {
		//cout << "Constructor with arguments" << endl;
		
	}
	//destructor
	~Student() {
		//cout << "destructor:|" << endl;
		if (marks != nullptr) {
			delete[] marks;
		}
	}

	string toString() {

		string s = "Name : " + name;
		s += "\nage : " + to_string(age);
		s += "\nmark : " + getAllMarks();
		s += "\nalive : ";
		s += (alive == true ? "yes" : "no");
		s += "\n";

		return s;
	}

	string getAllMarks() {
		string s = "";

		if (countMark == 0) {
			return "[]";
		}

		for (int i = 0; i < countMark; i++)
		{
			s += to_string(marks[i]) + " ";
		}
	}

	int getMark(int index) {
		return index < 0 || index > countMark || !marks ? 0 : marks[index];
	}

	void setMark(int index, int mark) {

		if (index >= 0 && index > countMark) {
			marks[index] = mark;
		}
	}

};

//default is private
