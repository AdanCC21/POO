#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Sobrecargar.h"
#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::ostream;

class Sobrecargar{
public:
	
	string numerador;
	string denominador;
	string resultado;

	Sobrecargar();
	Sobrecargar(string fra);

	Sobrecargar operator+(Sobrecargar fra);
	Sobrecargar operator-(Sobrecargar fra);
	Sobrecargar operator*(Sobrecargar fra);
	Sobrecargar operator/(Sobrecargar fra);
	Sobrecargar operator=(Sobrecargar fra);
	Sobrecargar operator<<(Sobrecargar fra);
};

#define _CRT_SECURE_NO_WARNINGS
#include "Sobrecargar.h"
#include <iostream>
#include <string>
#include <sstream>


string space(string str) {
	string ret;
	for (char c : str) {
		if (c != ' ') {
			ret.push_back(c);
		}
	}
	return ret;
}


Sobrecargar::Sobrecargar(){
	numerador = "0";
	denominador = "1";
	resultado = "0";
}

Sobrecargar::Sobrecargar(string fra) {
	int num, den;
	char o;
	fra = space(fra);
	std::istringstream in(fra);
	in >> num >> o >> den;
	numerador = std::to_string(num);
	denominador = std::to_string(den);
}

Sobrecargar Sobrecargar::operator+(Sobrecargar fra) {
	Sobrecargar resultado;
	resultado.numerador = "(" + numerador + "*" + fra.denominador + "+" + denominador + "*" + fra.numerador + ")";
	resultado.denominador = denominador + "*" + fra.denominador;
	return resultado;
}

Sobrecargar Sobrecargar::operator-(Sobrecargar fra) {
	Sobrecargar resultado;
	resultado.numerador = "(" + numerador + "*" + fra.denominador + "-" + denominador + "*" + fra.numerador + ")";
	resultado.denominador = denominador + "*" + fra.denominador;
	return resultado;
}

Sobrecargar Sobrecargar::operator*(Sobrecargar fra) {
	Sobrecargar resultado;
	resultado.numerador = numerador + "*" + fra.numerador;
	resultado.denominador = denominador + "*" + fra.denominador;
	return resultado;
}

Sobrecargar Sobrecargar::operator/(Sobrecargar fra) {
	Sobrecargar resultado;
	resultado.numerador = numerador + "*" + fra.denominador;
	resultado.denominador = denominador + "*" + fra.numerador;
	return resultado;
}

Sobrecargar Sobrecargar::operator=(Sobrecargar fra)
{
	numerador = fra.numerador;
	denominador = fra.denominador;
	return *this;
	
}

Sobrecargar Sobrecargar::operator<<(Sobrecargar fra){
	std::cout << fra.numerador << "/" << fra.denominador << std::endl;
	return *this;


}