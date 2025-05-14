/*#include "ArrayList.h"


void ArrayList::add(int value) {

	if (array != nullptr) {

	int* newArray = new int[size + 1];
		for (int i = 0; i < size; i++){

			newArray[i] = array[i];
		}
		delete[] array;

		size++;


	
	}
}
void ArrayList::add(int index, int value) {

	if (index > 0 && index < size && array != nullptr) {

		int* newArray = new int[size + 1];

		for (int i = 0 , j = 0; i < size; i++)
		{
			newArray[i] = array[i];
		}

		delete[] array;

	}
}
void addAll(int* values, int size);
void addAll(int index, int* values, int size);

void remove(int index);
void remove() {


	size--;

	int* newArray = new int[size];

	for (int i = 0; i < size; i++)
	{

	}

}

int getsize() {  }
int ArrayList::get(int index) {
	if (index > 0  && array != nullptr) {

		return array[index];
	}
}
void set(int index, int value) {

	if (index > 0 && index < size && array != nullptr) {

		int* list = new int[size];

		list[index - 1] = value;
	}
}
void ArrayList::clear() {
	if (array != nullptr) {
		delete[] array;
		array = nullptr;
		size = 0;
	}
}
bool isEmpty() { return size() == 0; }

string toString(){
	string s = "";

}*/
