#include "main.h"

class Student {
private:
	string name;
	int age;
	int countMark;
	int* marks;
	bool alive;

	string getAllMarks(); 
public:


	//default-constructor or constructor without arguments
	Student() :Student("no name", 13, 10 , true){}

	// constructor with arguments
	Student(string nm) : Student(nm, 13, 4.0 , true){}

	// canonical-constructor 
	Student(string name , int age , int countMark , bool alive); 
	// copy-constructor 
	Student(const Student& student) : Student (student.name, student.age,
		student.countMark, student.alive){}
	//destructor
	~Student();

	//getter and setter for name
	string getName();
	void setName(string name);

	//getter and setter for age
	int getAge();
	void setAge(int age);

	//getter for countMark
	int getcountMark();

	//getter for marks
	int* getMarks();

	//is(getter) and setter for alive
	bool isAlive();
	void setAlive(bool alive);

	int getMark(int index); 

	void setMark(int index, int mark);

	string toString();

};

//default is private
