//
// Created by Arias Arevalo, Carlos on 5/30/25.
//

#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"


class Student : public Person {
private:
	char* _major;
	unsigned short int _gpa; // 100 based
public:
	Student(const string& name, unsigned int age, string& major, unsigned short int gpa = 0);
	~Student();
	Student(const Student& student);
	Student& operator=(const Student& student);
	string ToString()const;
	void SetGPA(unsigned short int gpa);
	unsigned short int GetGPA()const;
	string GetMajor()const;

};



#endif //STUDENT_H
