#pragma once
#include<string>
#include<ostream>
using std::string;
using std::ostream;
class Vector
{
public:
	double x;
	double y;
	double z;
	//utilizamos parametros default
	//si se omiten al invocar el constructor
	//toman el valor default
	Vector(double x = 0, double y = 0, double z = 0);

	string ToString();//Genera una cadena con la informacion
	//del vector.
	double GetMagnitud();
	Vector GetUnitVector();
	/*Operaciones vectroriales*/
	Vector Sumar(Vector v2);
	Vector Multiplicar(Vector v2);//producto vectorial
	//en C++ podemos sobrecargar funciones
	Vector Multiplicar(double s);
	//En C++ se pueden sobrecargar los operadores, esto
	//es, podemos definir que sucedera cuando se aplique
	//un operador a un elemento de determinado tipo.
	//Para sobrecargar un operador se crea una funcion
	//con un nombre especial. Cuando la funcion es miembro
	//de una clase, el operando izquierdo es el objeto
	//al cual pertenece la funcion, y el operando derecho
	//debe ser recibido por la funcion como parametro.
	//el nombre de la funcion debe ser operator seguido
	//del operador a sobrecargar. El tipo de retorno
	//debe ser congruente con la operacion
	Vector operator*(Vector v2);
	Vector operator*(double s);
	Vector operator+(Vector v2);
};
//Cuando el operador no es miembro de la clase
//se deben recibir los dos operandos como
//parametro
Vector operator*(double z, Vector v);
//Sobrecargamos el operador << para poder enviar un vector
//a un stream de salida como cout.
ostream &operator<<(ostream& out, Vector v);

//#define _CRT_SECURE_NO_WARNINGS
#include "Vector.h"
#include<sstream> //streams basados en cadena
#include<iomanip>

Vector::Vector(double x, double y, double z)
{
	//todo objeto tiene un apuntador a si
	//si mismo, que se llama this. Es una
	//forma de hacer referencia a si mismo
	this->x = x;
	this->y = y;
	this->z = z;
}

Vector Vector::Sumar(Vector v2)
{
	Vector r;
	r.x = this->x + v2.x;
	r.y = this->y + v2.y;
	r.z = this->z + v2.z;
	return r;
}

Vector Vector::Multiplicar(Vector v2)
{
	Vector r;
	r.x = this->y * v2.z - this->z * v2.y;
	r.y = this->z * v2.x - this->x * v2.z;
	r.z = this->x * v2.y - this->y * v2.x;
	return r;
}
Vector Vector::Multiplicar(double s)
{
	Vector r;
	r.x = this->x * s;
	r.y = this->y * s;
	r.z = this->z * s;
	return r;
}
Vector Vector::operator*(Vector v2)
{
	Vector r;
	r.x = this->y * v2.z - this->z * v2.y;
	r.y = this->z * v2.x - this->x * v2.z;
	r.z = this->x * v2.y - this->y * v2.x;
	return r;
}
Vector Vector::operator*(double s)
{
	Vector r;
	r.x = this->x * s;
	r.y = this->y * s;
	r.z = this->z * s;
	return r;
}
Vector Vector::operator+(Vector v2)
{
	Vector r;
	r.x = this->x + v2.x;
	r.y = this->y + v2.y;
	r.z = this->z + v2.z;
	return r;
}
string Vector::ToString()
{
	/*char cad[128];
	sprintf(cad, "(%.2lf,%.2lf,%.2lf)", x, y, z);*/
	std::ostringstream out;
	
	//out << "(" << x << "," << y << "," << z << ")";
	out << *this;
	return out.str();
}

double Vector::GetMagnitud()
{

	return sqrt(x*x+y*y+z*z);
}

Vector Vector::GetUnitVector()
{
	double m = GetMagnitud();
	Vector r;
	r.x = x / m;
	r.y = y / m;
	r.z = z / m;
	return r;
}

Vector operator*(double s, Vector v)
{
	return v*s;
}

ostream& operator<<(ostream& out, Vector v)
{
	out << "(" << v.x << "," << v.y << "," << v.z << ")";
	return out;
}


