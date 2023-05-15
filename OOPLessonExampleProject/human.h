#pragma once
#include "main.h"

class Human
{
private:
	string name;
	string surname;
	int age;
	
public:
	static const int MIN_AGE = 0;
	static const int MAX_AGE = 160;

	Human();
	Human(string n, string sname, int a);
	Human(string n, string sname);

	~Human();

	string get_name();
	void set_name(string n);
	string get_surname();
	void set_surname(string n);
	int get_age();
	void set_age(int a);
	
	//string convert_to_string();
};

