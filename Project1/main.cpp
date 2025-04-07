#include "student.h"

void change(Student st) {
	st.name = "Lesha";
	st.age = 15;
	st.mark = 10;
	st.alive = false;
}

int main() {

	Student st1, temp;

	st1.name = "Bogdan";
	st1.age = 14;
	st1.mark = 9.5;
	st1.alive = true;

	temp = st1;

	cout << "Before : " << endl;
	cout<< st1.getString() << endl;
	cout << temp.getString() << endl;

	//change(st1);
	st1.name = "Vova";

	cout << "After : " << endl;
	cout << st1.getString() << endl;
	cout << temp.getString() << endl;

	//cout << st1.getString() << endl;
	//cout << st2.getString() << endl;
	//cout << st3.getString() << endl;
	
	//string name = st1.mark > st2.mark ? st1.name : st2.name;

	//Student t = st1.mark > st2.mark ? st1 : st2;

	//cout << "Best : " << t.name << endl;

	return 0;
}