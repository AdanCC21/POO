// Referencias.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include"Persona.h"
using std::cout;
using std::endl;

void UsarPersona(Persona &persona) {
    cout << "----- Utilizando persona ------" << endl;
    persona.Saludar();
    persona.HacerReir(rand());
    cout << "--- Persona utilizada -----" << endl;
}

int main()
{
    
    
    srand(time(0));
    Persona persona1("Sempronio", 20);
    Persona persona2("AMLO", 72);
    Persona* persona3= new Persona("Abundio", 23);
    //persona3 = &persona1;
    persona1.Saludar();
    UsarPersona(persona2);
    UsarPersona(*persona3);


    cout << "Adios..." << endl;
    delete persona3;
}

