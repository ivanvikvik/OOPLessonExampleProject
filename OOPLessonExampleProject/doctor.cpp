#include "doctor.h"

Doctor::Doctor() {

}

Doctor::Doctor(string n, string sname, int a, int exp, string sk) {
	set_name(n);
	set_surname(sname);
	set_age(a);
	experience = exp;
	skill = sk;
}

Doctor::Doctor(string n, string sname) {
	set_name(n);
	set_surname(sname);
}

Doctor::~Doctor() {
}

int Doctor::get_experience() {
	return experience;
}

void Doctor::set_experience(int exp) {
	if (exp >= 0 and exp <= 100) {
		experience = exp;
	}
}

string Doctor::get_skill() {
	return skill;
}

void Doctor::set_skill(string sk) {
	skill = sk;
}

string Doctor::convert_to_string() {
	return get_name() + " " + get_surname() + " (age = " + to_string(get_age())
		+ ", experience = " + to_string(experience)
		+ ", skill: " + skill + ")";
}