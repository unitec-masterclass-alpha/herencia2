//
// Created by Arias Arevalo, Carlos on 5/30/25.
//

#include "person.h"

#include <cstring>
#include <sstream>
using std::stringstream;

Person::Person(const string &name, const string& id, unsigned int age): _age(age) {
	_name = new char[strlen(name.c_str()) + 1];
	strcpy(_name, name.c_str());
	if (id.length() == 5)
		strcpy(_id, id.c_str());
	else
		strcpy(_id, "XXXXX");
}

Person::~Person() {
	delete[] _name;
}

Person::Person(const Person &person): _age(person._age) {
	_name = new char[strlen(person._name) + 1];
	strcpy(_name, person._name);
	strcpy(_id, person._id);
}

Person & Person::operator=(const Person &person) {
	if (this != &person) {
		delete[] _name;
		_name = new char[strlen(person._name) + 1];
		strcpy(_name, person._name);
		strcpy(_id, person._id);
		_age = person._age;
	}
	return *this;
}

string Person::ToString() const {
	stringstream ss;
	ss << "ID: " << _id << " Name: " << _name << " Age: " << _age;
	return ss.str();
}

void Person::Birthday() {
	_age++;
}
string Person::GetID()const{
	return string(_id);
}
