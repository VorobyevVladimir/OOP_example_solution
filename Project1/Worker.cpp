#include "Worker.h"
//sub string

Worker::Worker() : Worker("", 0, false , 0.0 , "no conpany"){ cout << "worker default constructor" << endl; }
Worker::Worker(string name, int age, bool gender, double salary, string company) : Human(name , age , gender){
	this->salary = salary;
	this->company = company;
}
Worker::Worker(const Worker& worker):Human(worker){
	this->salary = salary;
	this->company = company;
}
Worker::~Worker(){ cout << "worker default destructor" << endl; }

double Worker::getSalary() {return salary;}
void Worker::setSalary() { this->salary = salary; }
string Worker::getCompany() { return company; }
void Worker::setCompany(){ this->company = company; }
string Worker::toString() {
	string s = "";
	s +=  to_string(salary) + ", "
		+ company;
	return Human::toString() + s;
}