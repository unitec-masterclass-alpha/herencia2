# herencia1
Ejemplo de Herencia Persona-Estudiante-Profesor


## Estructura de la Herencia

Clase Base: Person

Person
Nombre (c-string), Edad
--
Constructor
Constructor de Copia
Destructor
Operador =
ToString
Birthday

Clase Estudiante --> Es derivada de Persona
Carrera (major) (c-string), promedio (gpa)
--
Constructor
Constructor de Copia
Destructor
Operador =
ToString
SetGPA
GetGPA
GetMajor

Clase Profesor --> Es derivada de Persona
Departamento (c-string), salario
--
Constructor
Constructor de Copia
Destructor
Operador =
ToString
GetDepartamento
SetDepartamento
GetSalary
Raise