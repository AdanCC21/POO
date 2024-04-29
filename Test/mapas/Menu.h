#pragma once
#include <iostream>
#include <string>
#include "Opcion.h"
#include <map>

using std::cout;
using std::endl;
using std::cin;

using std::string;
using std::map;

class Menu{
protected:
	string titulo;
	//Para manejar las multiples instancias de opcion en este menu, utilizaremos un mapa
	map<char, Opcion> opciones;

public:
	Menu(string titulo = "Menu");
	void Agregar(Opcion laAplicacion);
	void Eliminar(char tecla);
	void desplegar();
	char seleccionar();
};

Menu::Menu(string titulo){
	this->titulo = titulo;
}

void Menu::Agregar(Opcion laAplicacion)
{
	if(opciones.find(laAplicacion.GetTecla())==opciones.end())
	{
		opciones.insert({laAplicacion.GetTecla(),laAplicacion});
	}
	else
	{
		throw "la opcion ya existe en el menu";
	}
}

void Menu::Eliminar(char tecla)
{
	auto it = opciones.find(tecla);
	if(it != opciones.end())
	{
		opciones.erase(it);
	}
}

void Menu::desplegar()
{
	cout<<titulo<<endl;
	//desplegamos las opciones
	for(auto &par : opciones)
	{
		//Second es el numero asociado
		par.second.desplegar();
	}
}

char Menu::seleccionar()
{
	char selec;
	while(true)
	{
		cout<< "seleccione una opcion"<<endl;
		cin>>selec;
		
		//Busacmos la opcion seleccionada
		auto it=opciones.find(selec);
		if(it!=opciones.end())
		{
			(*it).second.ejecutar();
			return selec;
		}
		else
		{
			cout<<"Opcion no valida"<<endl;
		}
	}
}

