#include "person.h"
#include "student.h"
#include "professor.h"

#include <iostream>

using std::cout;
using std::endl;
int main() {
	Person p("Pamela", 19);
	Student c("Cesar", 20, "Publicidad", 99);
	Professor d("Carlos", 35, "Ing. Sistemas", 30000);

	cout << p.ToString() << endl;
	cout << c.ToString() << endl;
	cout << d.ToString() << endl;

	cout << string(80, '-') << endl;

	// Pasar person como parametro por valor y por referencia a una funcion
	// Usar STL vector o list o map ?
	// Git... branches y pull requests
	Person* a = new Person("Lisbeth", 18);
	Person* b = new Student("Ariel", 18, "Turismo", 85);
	Person* e = new Professor("Mini Me", 40, "Computer Science", 50000);

	cout << a->ToString() << endl; // Static Binding
	cout << b->ToString() << endl;
	cout << e->ToString() << endl;

	delete a;
	delete b;
	delete e;

	return 0;
}