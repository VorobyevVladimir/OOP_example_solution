#include "teacher.h"


int main() {
	Student* list = nullptr;
	int size;

	cout << "Input numbers of students: ";
	cin >> size;
	
	list = new Student[size];

	cout << "Input students data: \n";
	for (int i = 0; i < size; i++)
	{
		cout << "Student number : " << i +1 << ":\n";
		cout << "Name : ";
		cin >> list[i].name;

		cout << "Age : ";
		cin >> list[i].age;

		cout << "Mark : ";
		cin >> list[i].mark;

		cout << "Is alive (y/n): ";
		char answer;
		cin >> answer;

		list[i].alive = islower(answer) == 'y';

	}

	teacher teacher;

	Student result = teacher.getAllBestStudents(list, size);

	string msg = result.alive ? "Best is" + result.name : "No best students";

	cout << msg;

	return 0;
}