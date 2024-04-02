#include <iostream>
#include <string>

#include "Persona.h"

int main()
{
    string name;
    int edad;
    
    cout<< "Ingrese su nombre"<<endl;
    cin>>name;
    cout<<"Ingrese su edad"<<endl;
    cin>>edad;
    
    Persona per1 (name,edad);
    cout<<"";
    cout<<"Datos"<<endl;
    cout<<per1.getName()<<endl<<per1.getEdad()<<endl;
    cout<<"";
    per1.saludar();

}