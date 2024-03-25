  #define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <sstream>
#include "Sobrecargar.h"

using std::cout;
using std::endl;
using std::string;
using std::istringstream;


int main()
{
    //Var
    int num, den;
    char o;
    string f = "3 / 6";
    Sobrecargar f1 = f;
    //Removemos los espacios de la cadena
    string cadena = "4 / 8";
    cadena = space(cadena);
    istringstream in(cadena);
    in >> num >> o >> den;
    Sobrecargar f2 = cadena;

    Sobrecargar f3 = f1 + f2;
    cout << f3.numerador << "/" << f3.denominador << endl;

    return 0;
    
}