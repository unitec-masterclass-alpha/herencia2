//
// Created by Arias Arevalo, Carlos on 5/30/25.
//

#include "student.h"

#include <cstring>
#include <sstream>
using std::stringstream;

Student::Student(const string &name, unsigned int age, string &major, unsigned short int gpa)
	: Person(name, age), _gpa(gpa){
	_major = new char[strlen(major.c_str()) + 1];
	strcpy(_major, major.c_str());
}

Student::~Student() {
	delete[] _major;
}

Student::Student(const Student &student):Person(student), _gpa(student._gpa) {
	_major = new char[strlen(student._major) + 1];
	strcpy(_major, student._major);

}

Student & Student::operator=(const Student &student) {
	// Esto esta sospechoso
	if (this != &student) {
		delete[] _major;
		_major = new char[strlen(student._major) + 1];
		strcpy(_major, student._major);
		_gpa = student._gpa;
	}
	return *this;
}

string Student::ToString() const {
	stringstream ss;

	ss << Person::ToString() << "Major: " << _major << " GPA: " << _gpa;
	return ss.str();
}

void Student::SetGPA(unsigned short int gpa) {
	_gpa = gpa;
}

unsigned short int Student::GetGPA() const {
	return _gpa;
}

string Student::GetMajor() const {
	return _major;
}
