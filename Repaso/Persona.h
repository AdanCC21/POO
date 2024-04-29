class Persona{
public:
    Persona();
    Persona(char nombre[], int edadd);
    void priDatos();
    // ~Persona();
private:
    char name[30];
    int edad;
};

#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

Persona::Persona(){
    strcpy(name,"Juan");
    edad=18;
}

Persona::Persona(char nombre[],int edad){
    strcpy(name,nombre);
    this->edad=edad;
}

void Persona::priDatos(){
    cout << "Nombre " << this->name<<endl;
    cout << "Edad " << this->edad<<endl;
}

// Persona::~Persona()
// {
//     cout<<"Destructor";
// }
