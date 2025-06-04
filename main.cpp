#include "person.h"
#include "student.h"
#include "professor.h"

#include <iostream>

using std::cout;
using std::endl;
int main() {
	Person* a = new Person("Juan", "A0010", 21);
	Student* b = new Student("Henry", "KL013", 44, "Psychology");
	Professor* c = new Professor("Kelly", "OLE11", 32, "Computer Science", 20000);

	cout << a->ToString() << endl;
	cout << b->ToString() << endl;
	cout << c->ToString() << endl;

	cout << string(80, '-') << endl;

	a->Birthday();
	cout << a->GetID() << endl;



	return 0;
}
