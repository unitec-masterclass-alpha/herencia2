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




	return 0;
}