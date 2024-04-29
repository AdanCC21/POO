#include <iostream>
#include "Persona.h"
#include "Estudiante.h"

using std::cout;
using std::endl;

int main()
{   
    string sem="Ing en software";
    Estudiante alumno("Adan",19,372799,4, sem);
    alumno.Saludar();
    alumno.estudiar();
}




