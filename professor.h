//
// Created by Arias Arevalo, Carlos on 5/30/25.
//

#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "person.h"


class Professor : public Person {
private:
	char* _department;
	double _salary;
	unsigned int _rank;
public:
	Professor(const string& name, const string& id, unsigned int age, const string& department, double salary);
	Professor(const Professor &professor);
	~Professor();
	Professor & operator=(const Professor &professor);
	string ToString()const;
	string GetDepartment()const;
	void SetDepartment(const string& department);
	double Raise(double percentage);
	unsigned int GetRank()const;
	string GetRankString()const;
	void Promote();
};



#endif //PROFESSOR_H
