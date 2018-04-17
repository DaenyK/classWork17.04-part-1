#pragma once
#include <string>
#include <iostream>
#include <locale.h>

using namespace std;
class student
{
private:
	string name;
	string sName;
	int age;

public:
	student() :name(""), sName(""), age(0) {}

	student(string name)
	{
		this->name = name;
		this->sName = "";
		this->age = 0;
	}

	student(string name, string sName, int age)
	{
		this->name = name;
		this->sName = sName;
		this->age = age;
	}

	student(const student &s)
	{
		this->name = s.name;
		this->sName = s.sName;
		this->age = s.age;
	}

	~student() {
		cout << "destructor" << endl;
	}

	void print()
	{
		cout << name << "\t" << sName << "\t" << age << endl;
	}
};