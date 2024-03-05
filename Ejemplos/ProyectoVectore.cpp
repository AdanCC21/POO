// ProyectoVectore.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include"Vector.h"
using std::cout;
using std::endl;
using std::string;

int main()
{
    Vector v1(10, 20, 5), v2={25,11,7};
    Vector v3;
    //v3=v1.Sumar(v2);
    v3 = v1 + v2;
    /*cout << "Vector resultante: (" << v3.x << "," << v3.y;
    cout << "," << v3.z << ")";*/
    /*cout << v1.ToString() << "+" << v2.ToString();
    cout << "=" << v3.ToString() << endl;*/
    cout << v1 << "+" << v2 << "=" << v3 << endl;
    //v3=v1.Multiplicar(v2);
    v3 = v1*v2;
    //v3=v1.operator*(v2);
    /*cout << v1.ToString() << "+" << v2.ToString();
    cout << "=" << v3.ToString() << endl;*/
    cout << v1 << "+" << v2 << "=" << v3 << endl;
    v3 = v3*2;
    v3 = 2 * v3;
    cout << v3 << endl;
}


