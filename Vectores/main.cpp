#include "Vector.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
    //Asignacion v1 x=10, y=20,z=5
    //Son lo mismo (),= {};
    Vector v1(10,20,5),v2={25,11,7};
    Vector v3;
    v3=v1.Sumar(v2);
    //o
    //v3=v1.Sumar({20,11,10});Aqui me genera un vector automaticamente

    // cout << "vector resultanto: ("<<v3.x << "," <<v3.y << "," << v3.z << ")"; 
    cout <<v1.Tostring()<<"+"<<v2.Tostring();
    cout<<"="<<v3.Tostring()<<endl;

    v3=v1.Multiplicar(v2);
    //pues lo mismo que:
    v3=v1*v2;
    //Seroa lo mismo que usar: 
    v3=v1.operator*(v2);
    //operator es una funcion definida en mi clase jsjks
    cout <<v1.Tostring()<<"+"<<v2.Tostring();
    cout<<"="<<v3.Tostring()<<endl;

    v3=v3.Multiplicar(2);
    cout <<v3.Tostring() <<endl;

    //Con esto le asigna el valor automatico depende lo que le guardemos
    // auto xvar=10.5;
    
}

