#include "student.h"

void change(Student st) {
	st.name = "Lesha";
	st.age = 15;
	st.mark = 10;
	st.alive = false;
}

int main() {

	Student *st1 = nullptr;
	st1 = new Student;

	Student* st2 = st1;

	st1->name = "Vlad";
	st1->age = 15;
	st1->mark = 9.9;
	st1->alive = true;

	cout << "Before: " << endl;
	cout << st1->getString() << endl;

	st2->name = "Matvey";

	cout << "After: " << endl;
	cout << st1->getString() << endl;

	return 0;
}