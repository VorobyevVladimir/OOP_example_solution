#include "student.h"



	string Student::getAllMarks(){
		string s = "";

		if (countMark == 0) {
			return "[]";
		}

		for (int i = 0; i < countMark; i++)
		{
			s += to_string(marks[i]) + " ";
		}
		return s;
	}


	
	Student::Student(string name , int age , int countMark , bool alive){
		
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
	
	Student::~Student(){
		
		if (marks != nullptr) {
			delete[] marks;
		}
	}

	string Student::getName(){return name;}
    
	void Student::setName(string name){this->name = name;}

	int Student::getAge(){return age;}

	void Student::setAge(int age){
		if(age >= 13 && age <= 18 ){
			this->age = age;
		}
	}

	int Student::getcountMark(){return countMark;}

	int* Student::getMarks(){return marks;}

	bool Student::isAlive(){return alive;}

	void Student::setAlive(bool alive){this->alive = alive;}

	int Student::getMark(int index){
		return index < 0 || index > countMark || !marks ? 0 : marks[index];
	}

	void Student::setMark(int index, int mark){

		if (index >= 0 && index > countMark) {
			marks[index] = mark;
		}
	}

    string Student::toString(){

		string s = "Name : " + name;
		s += "\nage : " + to_string(age);
		s += "\nmark : " + getAllMarks();
		s += "\nalive : ";
		s += (alive == true ? "yes" : "no");
		s += "\n";

		return s;
	}


