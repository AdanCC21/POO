#include <iostream>
#include "Pila.h"

using std::cout;
using std::endl;

int main()
{
    Pila<int> pila;
    pila.push(9);
    pila.push(20);
    pila.push(1);
    pila.push(3);
    pila.push(666);
    cout<<"Elementos de la pila"<<endl;
    while(pila.IsEmpty()==false)
    {
        cout<<" "<< pila.pop(); 
    }
    cout<<endl;

    Pila<double>pila2;
    pila2.push(1.5);
    pila2.push(1.5);
    pila2.push(1.5);
    pila2.push(1.5);
    pila2.push(1.6);
    cout<<"Segunda pila"<<endl;
    while(!pila2.IsEmpty()){
        cout<<" "<<pila2.pop();
    }

}