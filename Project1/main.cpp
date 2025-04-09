#include "teacher.h"


int main() {

	Student student1{};
	//Student student2("Alex");
	//Student student3("Nikita", 15, 8.0, true);
	//Student student4(student3);

	Student student2{ "Alex" };
	Student student3{ "Nikita", 15, 8.0, true};
	Student student4{ student3 };


	cout << student1.toString() << endl;
	cout << student2.toString() << endl;
	cout << student3.toString() << endl;


	return 0;
}