//
// Created by Arias Arevalo, Carlos on 5/30/25.
//

#include "professor.h"

#include <cstring>
#include <sstream>
using std::stringstream;

Professor::Professor(const string &name, unsigned int age, const string &department, double salary)
	: Person(name, age), _salary(salary) {
	_department = new char[strlen(department.c_str()) + 1];
	strcpy(_department, department.c_str());
}

Professor::Professor(const Professor &professor): Person(professor), _salary(professor._salary) {
	_department = new char[strlen(professor._department) + 1];
	strcpy(_department, professor._department);
}

Professor::~Professor() {
	delete[] _department;
}

Professor & Professor::operator=(const Professor &professor) {
	// Esto esta sospechoso, hay que llamar al Chapulin
	if (this != &professor) {
		delete[] _department;
		_department = new char[strlen(professor._department) + 1];
		strcpy(_department, professor._department);
		_salary = professor._salary;
	}
	return *this;
}

string Professor::ToString() const {
	stringstream ss;
	ss << Person::ToString() << " Department: " << _department << " Salary: " << _salary;
	return ss.str();
}

string Professor::GetDepartment() const {
	return _department;
}

void Professor::SetDepartment(const string &department) {
	delete[] _department;
	_department = new char[strlen(department.c_str()) + 1];
	strcpy(_department, department.c_str());
}

double Professor::Raise(double percentage) {
	_salary += _salary * percentage;
	return _salary;
}
