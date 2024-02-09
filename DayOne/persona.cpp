#include <iostream>
#include "clases.h"

using std::cout;
using std::endl;

void Persona::reir() {
    cout <<"JAJAJAJA"<<endl;

}

void Persona::comer(){
    cout << "nom,nom, iko, iko"<<endl;

}

void Persona::saludar(){
    cout << "Hola soy "<< name <<endl;
    cout << "y tengo "<< edad << "anios" << endl;
}

void Persona::makereir(int motivo){
    if(motivo % 3 == 0)
    {
        reir();
    }
    else
    {
        cout <<":|"<<endl;
    }
}
