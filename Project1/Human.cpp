#include "Human.h"
//base class
Human::Human() : Human("", 0 , false){
	cout << "Human default constractor"<< endl;
}
Human::Human(string name, bool gender, int age){
	this->name = name;
	this->age = age;
	this->gender = gender;
}
Human::Human(const Human& human) : Human(human.name , human.age , human.gender){}
Human::~Human(){ cout << "Human default destructor" << endl; }

string Human::getName() {
	return name;
}
void Human::setName(){
	this->name = name;
}
int Human::getAge(){
	return age;
}
void Human::setAge(){
	this->age = age;
}
bool Human::isGender(){
	return gender;
}
void Human::setGender(){
	this->gender = gender;
}

void Human::eat(){}
void Human::sleep(){}
void Human::walk(){}
void Human::learn(){}

string Human::toString(){
	string s = "";
	s += name + ", "
		+ to_string(age) + ", "
		+ (gender ? "male" : "female");
		 
}