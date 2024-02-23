#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "Persona.h"

using std::cout;
using std::endl;

void use_persona(Persona *persona)
{
    cout<<"---------Utilizando persona-----"<< endl;
    persona->Saludar();
    persona->HacerReir(rand());
    cout << "Persona utilizada" <<endl;
}

void incrementar (int *n)
{
    (*n)++;
}

int main()
{
    int n=10;

    cout << "valor de n " << n << endl;
    incrementar(&n);
    cout << "valor de n " << n << endl;

    // srand(time(0));
    // Persona persona1("Sergio",20);
    // Persona persona2("Amlo",72);
    // Persona *persona3 = new Persona ("Abundio",23);

    // persona1.Saludar();
    // use_persona(&persona2);
    // use_persona(persona3);

    // cout <<"Adiooos..." <<endl;
    // delete persona3;

    /*En c++ hay variables llamadas referencias, es ua variable que utiliza la misma memoria que esta empleando otra variable
    La referencia se decalara anteponiendo & a la variable al declararla*/

    int &y=n;   //referencia
    y=20;
    cout << "Valor de n despues de y " << n << endl;
    n=30;
    cout << "valor de n " << n << endl;

}