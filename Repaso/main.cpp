#include <iostream>

#include "Persona.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
    char *tname;
    cout<<"Ingrese su nombre"<<endl;
    cin >> tname;

    Persona Juan(tname,18);
    Juan.priDatos();
    
}
