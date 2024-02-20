#pragma once
class Persona
{
	//Los miembros de la clase tienen un nivel de
	//proteccion o acceso. Por default, todos los elementos
	//son privados, pero se puede cambiar al tipo que nos
	//convenga.
	//existen 3 tipos de proteccion:
	//private (default)
	//protected
	//public
	//para poner el tipo de proteccion, es utiliza la palabra
	//clave seguida de : antes de la declaracion de los elementos
	//que tendran ese tipo de proteccion
protected:
	int edad=18;
	//char nombre[30]="Juan";
	char* nombre; //el nombre lo manejaremos en memoria dinamica
	void Reir();
	void Comer();
public:
	//Los objetos pueden tener un constructor. El constructor
	//es un metodo que se ejecuta automaticamente cuando el
	//objeto recien fue creado en memoria. El constructor
	//debe ser una funcion que tiene el mismo nombre que la
	//clase, y no tiene tipo de retorno.
	Persona();
	//Los constructores pueden recibir parametros
	//que serviran para la inicializacion
	Persona(const char* el_nombre, int la_edad);
	//En c++ podemos usar el mismo nombre para diferentes
	//funciones, siempre y cuando los parametros sean
	//diferentes. Cuando implementamos funciones de este
	//tipo, se le llama sobrecarga de funciones.

	//Los objetos pueden tener un destructor. El destuctor es un metodo
	//que se ejecuta automaticamente justo antes de que el objeto sea
	//destruido en la memoria.
	//el destructor es un metodo con el mismo nombre de la clase
	void HacerReir(int motivo);
	//sin parametros, sin tipo de retorno y con el prefijo ~
	~Persona();
	
	void Saludar();
	void Liberar();
};

#define _CRT_SECURE_NO_WARNINGS

#include<iostream>
#include<string.h>
using std::cout;
using std::endl;

void Persona::Reir() {
	cout << "Jajajaja" << endl;
}

void Persona::Comer()
{
	cout << "Nom, nom, nom...." << endl;
}

Persona::Persona()
{
	// los constructores se utilizan para inicializar
	//atributos y reservar recursos que pudiera
	//utilizar el objeto.
	edad = 20;
	//Necesitamos reservar memoria para el nombre
	nombre = (char *)malloc(7);
	strncpy(nombre, "Sosimo",6);
	nombre[6] = 0;
}

Persona::Persona(const char* el_nombre, int la_edad)
{
	edad = la_edad;
	//Necesitamos reservar memoria para el nombre
	nombre = (char*)malloc(strlen(el_nombre)+1);
	strncpy(nombre,  el_nombre, strlen(el_nombre));
	nombre[strlen(el_nombre)] = 0;
}

void Persona::HacerReir(int motivo)
{
	if ((motivo % 3) == 0) {
		Reir();
    }
	else
		cout << ":|" << endl;
}

void Persona::Saludar()
{
	cout << "Hola, yo soy " << nombre;
	cout << " y tengo " << edad << " anios"<<endl;
}

void Persona::Liberar()
{
	free(nombre);
	nombre = nullptr;
}

Persona::~Persona()
{
	if (nombre != nullptr) {

		cout << "Ejecutando destructor de " << nombre << "..." << endl;
		free(nombre);
	}
}



