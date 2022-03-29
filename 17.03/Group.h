#include "Students.h"

Students students;

class Group {
	public:
		Students* list;
		int count;

		Group() {
			list = NULL;
			count = 0;
		}

		void add(Students student) {
			if (list == NULL) {
				list = new Students[1];
				list[0] = student;
				count = 1;
				return;
			}
			Students* temp = new Students[count + 1];
			
			for (int i = 0; i < count; i++) {
				temp[i] = list[i];
			}

			temp[count] = student;
			count++;
			delete[] list;
			list = temp;
		}
};