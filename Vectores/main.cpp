#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "Vector.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    //v1 x=10, y=20,z=5
    Vector v1(10,20,5),v2={25,11,7};
    Vector v3;
    v3=v1.Sumar(v2);

    cout << "vector resultanto: ("<<v3.x << "," <<v3.y << "," << v3.z << ")"; 
}

