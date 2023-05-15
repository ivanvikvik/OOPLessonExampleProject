#include "human.h"

string Human::get_name() {
	return name;
}

void Human::set_name(string n) {
	name = n;
}

string Human::get_surname() {
	return name;
}

void Human::set_surname(string n) {
	surname = n;
}

int Human::get_age() {
	return age;
}

void Human::set_age(int a) {
	if (a > MIN_AGE && a < MAX_AGE) {
		age = a;
	}
}

// default-constructor (with no-args)
Human::Human() {
	name = "no name";
	surname = "no surname";
	age = 16;
}

// constructor with params (with args)
Human::Human(string n, string sname, int a) {
	name = n;
	surname = sname;
	age = a;
}

Human::Human(string n, string sname) {
	name = n;
	surname = sname;
}

Human::~Human() {
}

//string Human::convert_to_string() {
//	return name + " " + surname + " (age = " + to_string(age)
//		+ ", average mark = " + to_string(avg_mark) + ")";
//}