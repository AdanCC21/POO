#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ostream>
#include <string>
#include <sstream> //Streams basados en cadena

#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "Vector.h"

using std::ostream;
using std::string;

class Vector
{
public:
    double x;
    double y;
    double z;

    /*Constructor
    Utilizamos parametros default Si es que no estan especificadas,
    osea si no le enviamos
    Parametros usara los default*/
    Vector(double x = 0, double y = 0, double z = 0);
    Vector Sumar(Vector v2);
    // Para consola void pri();
    string Tostring();             // Genera una cadena con la informacion
    Vector Multiplicar(Vector v2); // Producto vectorial
    Vector Multiplicar(double s);

    float GetMagnitud();
    Vector GetUnitVector();
    /*En c++ podemos sobrecargar los operadores, podemos definir que sucedera cuandos se aplique un operador
    a un elemento de determinado tipo, Para sobrecargar un operador se crea un a funcion con un nombre especial
    Cuando la funcion es miembro de una clase, el operador izquierdo es el objeto, al cual pertenece la funcion, y el
    operando derecho debe ser recibido porla funcion como parametro
    El nombre de la funcion debe ser operator seguido del operador a sobrecargar. el tipo de retorno debe ser congruente
    con la operacion*/

    Vector operator*(Vector v2);
    // Vector operator+(double s);
};
// Sobrecargamos el operador <<
//  ostream &operator<<(ostream &out,Vector v);

float x = 10;

// Constructor
Vector::Vector(double x, double y, double z)
{
    /*Todo objeto tiene un apuntador a si mismo que se llama
    this. Es una forma de hacer referencia a si mismo*/
    /*El this es de la variable que manda a llamar la funcion ejemplo v1.sumar(v2), el this se referirira a los valores de v1*/
    this->x = x;
    this->y = y;
    this->z = z;
    /*el 2 puntos  hace que suemos la x de float global es como para decir que no pertenece a una variable local*/
    //::x=x;
}

Vector Vector::Sumar(Vector v2)
{
    Vector r;
    r.x = this->x + v2.x;
    r.y = this->y + v2.y;
    r.z = this->z + v2.z;
    return r;
}

string Vector::Tostring()
{

    /*Para convertir en cadea con c
    char cad[128];
    sprintf(cad,"%.2lf,%.2lf,%.2lf",x,y,z);//En lugar de imprimir en pantalla lo imprime en una cadena */

    std::ostringstream out; // Un string de salida de cadena que lo nombramos como out;

    out << "(" << x << "," << y << "," << z << ")"; // En vez de imprimir en pantalla lo imprime en una cadena?
    // Creo que no es de a wbo el return;
    return out.str();
}

Vector Vector::Multiplicar(Vector v2)
{
    Vector r;
    r.x = this->y * v2.z - this->z * v2.y;
    r.y = this->z * v2.x - this->x * v2.z;
    r.z = this->x * v2.y - this->y * v2.x;
    return r;
}

Vector Vector::Multiplicar(double s)
{
    Vector r;
    r.x = this->x * s;
    r.y = this->y * s;
    r.z = this->z * s;
    return r;
}

Vector Vector::operator*(Vector v2)
{
    Vector r;
    r.x = this->y * v2.z - this->z * v2.y;
    r.y = this->z * v2.x - this->x * v2.z;
    r.z = this->x * v2.y - this->y * v2.x;
    return r;
}

float Vector::GetMagnitud()
{
    return sqrt(x * x + y * y + z * z);
}

Vector Vector::GetUnitVector()
{
    double m = GetMagnitud();
    Vector r;
    r.x = x / m;
    r.y = y / m;
    r.z = z / m;
    return r;
}

/*
// Vector Vector::operator+(Vector s)
// {
//     Vector r;
//     r.x=this->x + s;
//     r.y=this->y + s;
//     r.z=this->z + s;
//     return r;
// }
*/

/*Es como para cambiar el tipo de print de cout
y ahorrarnos el v.z y solo enviar v
ostream &operator<<(ostream &out,Vector v)
{
     out<<"("<<v.x<<","<<v.y <<","<<v.z")";

}*/