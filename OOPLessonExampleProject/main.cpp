#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;	
};

void clean_student(Student st) {
	st.name = "no name";
	st.surname = "no surname";
	st.age = 0;
	st.avg_mark = 0;
}

string convert_to_string(Student st) {
	return st.name + " " + st.surname + " (age = "
		+ to_string(st.age) + ", average mark = " + to_string(st.avg_mark)
		+ ")";
}

int main() {
	Student st1, st2, st3;
	
	st1.name = "Ivan";
	st1.surname = "Ivanov";
	st1.age = 14;
	st1.avg_mark = 10;

	st2.name = "Genrih";
	st2.surname = "Gurshtinovich";
	st2.age = 14;
	st2.avg_mark = 9;

	st3.name = "Tigran";
	st3.surname = "Sarkesya";
	st3.age = 14;
	st3.avg_mark = 4;

	cout << convert_to_string(st1) << endl;
	cout << convert_to_string(st2) << endl;
	cout << convert_to_string(st3) << endl;


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