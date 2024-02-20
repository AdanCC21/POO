#define _CRT_SECURE_NO_WARNINGS // NO MORE WARNIIIIINGGGGGGGSSSSSSS
#include <iostream>
#include <cstdio>
#include "clases.h"
// Para usar lo de c podemos usar el .h o con una c al inicio y removiendo el .h

using std::cin;
using std::cout;
using std::endl;

int main()
{
    /*Creamos 2 objetos, existen 2 maneras de crearlo,
    estatica, el objeto se crea en memoria estatica, en el stack del programa
    */
    Persona la_persona; // Es como un struct pa
    /*En este punto del programa ya existe un objeto del clase persona en la memoria*/

    /*Hay lago llamado constructores que especifica que parametros debe de etener una variable de algun tipo de clase
    Ej la perdona Con el constructor podriamos declarar que necesita tener de base una edad y nombre, puede haber mas de un constructor
    pueden llamarse igual lo que los hara diferente sera si recibFe parametros y cuales, dependiendo los parametros que reciba o enviemos
    sera el constructor que se ejecutara*/

    /*En c++ podemos usar el mismo nombre para las funciones siempre y cuando se diferencien por los parametros*/

    la_persona.saludar();
    la_persona.reir();
}