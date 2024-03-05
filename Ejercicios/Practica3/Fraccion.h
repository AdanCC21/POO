#include <iostream>
#include <string>

#include <string.h>
#include <time.h>
#include <stdlib.h>

#pragma once
class Fraccion{
public:
    int x,y;
    Fraccion operator+(Fraccion y);
};
Fraccion operator+(Fraccion y);

Fraccion Fraccion::operator+(Fraccion y)
{
    int suma,suma1;
    suma =this->x + y.y;
    suma1=this->y + y.x;
    suma = suma+suma1;
}