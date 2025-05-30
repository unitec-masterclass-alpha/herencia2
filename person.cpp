//
// Created by Arias Arevalo, Carlos on 5/30/25.
//

#include "person.h"

#include <cstring>
#include <sstream>
using std::stringstream;

Person::Person(const string &name, unsigned int age): _age(age) {
	_name = new char[strlen(name.c_str()) + 1];
	strcpy(_name, name.c_str());
}

Person::~Person() {
	delete[] _name;
}

Person::Person(const Person &person): _age(person._age) {
	_name = new char[strlen(person._name) + 1];
	strcpy(_name, person._name);
}

Person & Person::operator=(const Person &person) {
	if (this != &person) {
		delete[] _name;
		_name = new char[strlen(person._name) + 1];
		strcpy(_name, person._name);
		_age = person._age;
	}
	return *this;
}

string Person::ToString() const {
	stringstream ss;
	ss << "Name: " << _name << " Age: " << _age;
	return ss.str();
}

void Person::Birthday() {
	_age++;
}
