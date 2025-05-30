//
// Created by Arias Arevalo, Carlos on 5/30/25.
//

#ifndef PERSON_H
#define PERSON_H

#include <string>

using std::string;

class Person {
private:
	char* _name;
	unsigned int _age;
public:
	Person(const string& name, unsigned int age);
	~Person();
	Person(const Person& person);
	Person& operator=(const Person& person);
	string ToString()const;
	void Birthday();
};



#endif //PERSON_H
