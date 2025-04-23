#include "initializer.h"


int main() {

	int count;

	cout << "How many students : " << endl;
	cin >> count;

	Student* list = nullptr;

	Initializer initializer;

	initializer.init(list, count);

	for (int i = 0; i < count; i++)
	{
		cout << list[i].toString() << endl;
	}

	

	return 0;
}