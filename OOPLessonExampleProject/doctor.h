#pragma once
#include "human.h"

class Doctor : public Human
{
private:
	int experience;
	string skill;

public:
	Doctor();
	Doctor(string n, string sname, int a, int experience, string skill);
	Doctor(string n, string sname);

	~Doctor();

	int get_experience();
	void set_experience(int exp);

	string get_skill();
	void set_skill(string sk);

	string convert_to_string();
};