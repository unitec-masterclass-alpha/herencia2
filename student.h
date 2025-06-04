//
// Created by Arias Arevalo, Carlos on 5/30/25.
//

#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"


class Student : public Person {
private:
	char* _major;
	double _gpa; // 100 based
	unsigned int _credits;
public:
	Student(const string& name, const string& id, unsigned int age, const string& major);
	~Student();
	Student(const Student& student);
	Student& operator=(const Student& student);
	string ToString()const;
	void SetGPA(unsigned short int gpa);
	double GetGPA()const;
	string GetMajor()const;
	void AddGrade(double grade, unsigned int credits);

};



#endif //STUDENT_H
