#include "student.h"

Student get_best_student(Student st1, Student st2, Student st3) {
	return st1.avg_mark > st2.avg_mark && st1.avg_mark > st3.avg_mark ? st1 
		: (st2.avg_mark > st3.avg_mark ? st2 : st3);
}

int main() {
	Student st;
	Student st1("Ivan", "Ivanov", 14, 10);
	Student st2("Genrih", "Gurshtinovich");
	Student st3(14);

	cout << st.convert_to_string() << endl;
	
	cout << st1.convert_to_string() << endl;
	cout << st2.convert_to_string() << endl;
	cout << st3.convert_to_string() << endl;



	
	/*st1.init("Ivan", "Ivanov", 14, 10);
	st2.init("Genrih", "Gurshtinovich", 14, 9);
	st3.init("Tigran", "Sarkesya", 14, 4);*/

	//cout << st1.convert_to_string() << endl;
	//cout << st2.convert_to_string() << endl;
	//cout << st3.convert_to_string() << endl;

	/*Student st = get_best_student(st1, st2, st3);
	cout << "Best student: " << st.convert_to_string() << endl;*/


	/*Student st2 = st1;

	st1.avg_mark = 9;*/

	//cout << "BEFORE fucntion calling:" << endl;

	//cout << st1.name << " " << st1.surname << " (age = " 
	//	<< st1.age << ", average mark = " << st1.avg_mark << ")" << endl;

	//clean_student(st1);

	//cout << "AFTER fucntion calling:" << endl;

	//cout << st1.name << " " << st1.surname << " (age = "
	//	<< st1.age << ", average mark = " << st1.avg_mark << ")" << endl;

	/*cout << st2.name << " " << st2.surname << " (age = "
		<< st2.age << ", average mark = " << st2.avg_mark << ")" << endl;*/

	return 0;
}