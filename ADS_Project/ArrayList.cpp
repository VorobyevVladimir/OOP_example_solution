#include "ArrayList.h"

ArrayList::ArrayList() {
	ArrayList = nullptr;
	size = 0;
}

void ArrayList::add(int value) {

	if (index > 0 && index < size && array != nullptr) {

		int* newArray = new int[size + 1];
		for (int i = 0; i < size; i++)
		{
			newArray[i] = array[i];
		}
		delete[] array;
		newArray[i] = array[i];
		size++;


	
	}

	delete[] ;

}
void ArrayList::add(int index, int value) {

	if (index > 0 && index < size && array != nullptr) {

		for (int i = 0 , j = 0; i < size; i++)
		{
			if (i != index) {
				NewArray = array[i++];
			}


		}

		int* list = new int[size];

		list[index - 1] = value;

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

int size() {  }
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

}
