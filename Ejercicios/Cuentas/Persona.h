#pragma once
#define _CRT_SECURE_NO_WARNINGS
class Persona
{

protected:
    int edad = 18;

    std::string nombre; // el nombre lo manejaremos con cadena de c++
    // void Reir() const;  // Un metodo const no puede modificar atributos
    // void Comer() const;

public:
    // Constructores
    Persona();
    Persona(const char *el_nombre, int la_edad);
    // Destructor
    //~Persona(); no manejamos memoria dinamica, no es necesario el destructor
    // void HacerReir(int motivo) const;
    // Getters y setters
    std::string GetNombre() const;
    void SetNombre(const char *nuevo_nombre);

    int GetEdad() const { return edad; };
    void SetEdad(int nueva_edad) { edad = (nueva_edad > 0) ? nueva_edad : edad; }

    void Saludar() const;
};


#include <iostream>
#include <string.h>
using std::cout;
using std::endl;

// void Persona::Reir() const
// {
//     cout << "Jajajaja" << endl;
// }

// void Persona::Comer() const
// {
//     cout << "Nom, nom, nom...." << endl;
// }

// void Persona::HacerReir(int motivo) const
// {
//     if ((motivo % 3) == 0)
//     {
//         Reir();
//     }
//     else
//         cout << ":|" << endl;
// }

/*
Persona::~Persona()
{
    if (nombre != nullptr) {

        cout << "Ejecutando destructor de " << nombre << "..." << endl;
        free(nombre);
    }
}*/

Persona::Persona()
{
    // los constructores se utilizan para inicializar
    // atributos y reservar recursos que pudiera
    // utilizar el objeto.
    edad = 20;
    nombre = "Sosimo";
}

Persona::Persona(const char *el_nombre, int la_edad)
{
    edad = la_edad;
    nombre = el_nombre;
}


std::string Persona::GetNombre() const
{
    return nombre;
}

void Persona::SetNombre(const char *nuevo_nombre)
{
    nombre = nuevo_nombre;
}

void Persona::Saludar() const
{
    cout << "Hola, yo soy " << nombre;
    cout << " y tengo " << edad << " anios" << endl;
}

