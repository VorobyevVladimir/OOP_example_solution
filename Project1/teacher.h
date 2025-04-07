#include "student.h"

class teacher {
	private:

	const int BEST_MARK = 9;

	int countBestStudents(Student* students, int size) {
		return 0;
	}

	public:

		Student* getAllBestStudents(Student* students, int size) {
			int count = countBestStudents(students, size);

			Student* list_of_best = new Student[count];
			int j;

			for (int i = 0; i < size; i++)
			{
				if (students[i].mark >= BEST_MARK) {
					list_of_best[j++] = students[i];
				}
			}
			

			return list_of_best;
		}
};