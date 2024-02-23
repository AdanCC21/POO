#pragma once
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
    Vector(double x=0,double y=0,double z=0);
    Vector Sumar(Vector v2);



};

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "Vector.h"

//Constructor
Vector::Vector(double x,double y, double z)
{
    /*Todo objeto tiene un apuntador a si mismo que se llama
    this. Es una forma de hacer referencia a si mismo*/
    this->x=x;
    this->y=y;
    this->z=z;
}

Vector Vector::Sumar(Vector v2)
{
    Vector r;
    r.x=this->x+v2.x;
    r.y=this->y+v2.y;
    r.z=this->z+v2.z;
    return r;
}
