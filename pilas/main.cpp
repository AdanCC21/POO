#include <iostream>
#include "Pila.h"

using std::cout;
using std::endl;

int main()
{
    Pila pila;
    pila.push(9);
    pila.push(20);
    pila.push(1);
    pila.push(3);
    pila.push(666);
    cout<<"Elementos de la pila"<<endl;
    while(pila.IsEmpty()==false)
    {
        cout<<" "<< pila.pop()<<endl; 
    }
}