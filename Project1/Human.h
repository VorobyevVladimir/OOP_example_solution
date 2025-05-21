#include "main.h"


class Human
{
private:

	string name;
	bool gender;
	int age;

protected:

	

public:
	

	Human();
	Human(string name, bool gender, int age);
	Human(const Human& human);

	string getName();
	void setName();
	int getAge();
	void setAge();
	bool isGender();
	void setGender();

	void eat();
	void sleep();
	void walk();
	void learn();

	string toString();


};

