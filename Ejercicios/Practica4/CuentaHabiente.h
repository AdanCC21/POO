#pragma once

#include "Banco.h"
#include "CuentaCheques.h"

// Propietario de la cuenta
// Almacenadas en un mapa cuya clave  sera el numero y el valor sera el apuntador al objeto de tipo cuentahabiente
// Guardar las cuentas que tenga un usuario en un vector

class CuentaHabiente{
public:
    int numero;
    string nombre;
    string curp;

    vector<CuentaCheques*> cuentas;

    // Quien es el cuentahabiente, ya sea por numero o especificando el objeto de tipo cuentahabeinte del propietario.
    CuentaHabiente(string name, string curp, int numero);
    void agregarCuenta(CuentaCheques* cuenta);

    int ObtenerCuenta();
    void ImprimirReporte();

};

CuentaHabiente::CuentaHabiente(string name, string curp, int numero){
    this->nombre=name;
    this->curp=curp;
    this->numero=numero;
}

void CuentaHabiente::agregarCuenta(CuentaCheques* cuenta){
    cuentas.push_back(cuenta);
}




//Ejemplo
/*
#include <iostream>
#include <string>
#include <vector>
#include <map>

// Declaración adelantada de CuentaHabiente
class CuentaHabiente;

class CuentaDeCheques {
private:
    int numeroCuenta;
    float saldo;
    CuentaHabiente* propietario; // Apuntador al propietario de la cuenta
public:
    // Constructor
    CuentaDeCheques(int numCuenta, float saldoInicial, CuentaHabiente* owner) : numeroCuenta(numCuenta), saldo(saldoInicial), propietario(owner) {}
    // Métodos para depositar, retirar, etc.
};

class CuentaHabiente {
private:
    int numeroCuentaHabiente;
    std::string nombre;
    std::string curp;
    std::vector<CuentaDeCheques*> cuentas; // Vector de cuentas de cheques
public:
    // Constructor
    CuentaHabiente(int numCuentaHab, std::string name, std::string curp) : numeroCuentaHabiente(numCuentaHab), nombre(name), curp(curp) {}
    // Método para agregar una cuenta de cheques al vector de cuentas
    void agregarCuenta(CuentaDeCheques* cuenta) {
        cuentas.push_back(cuenta);
    }
    // Otros métodos para operar con las cuentas
};

class Banco {
private:
    int ch_cont; // Contador para asignar número de cuenta habiente consecutivo
    int cuenta_cont; // Contador para asignar número de cuenta consecutivo
    std::map<int, CuentaHabiente*> cuentahabientes; // Mapa de número de cuenta habiente a objeto CuentaHabiente
    std::map<int, CuentaDeCheques*> cuentas; // Mapa de número de cuenta a objeto CuentaDeCheques
public:
    // Constructor
    Banco() : ch_cont(0), cuenta_cont(0) {}
    // Métodos para crear nuevos cuenta habientes y cuentas de cheques
    CuentaHabiente* crearCuentaHabiente(std::string nombre, std::string curp) {
        CuentaHabiente* nuevoCH = new CuentaHabiente(ch_cont++, nombre, curp);
        cuentahabientes.insert(std::make_pair(nuevoCH->getNumeroCuentaHabiente(), nuevoCH));
        return nuevoCH;
    }

    CuentaDeCheques* crearCuentaDeCheques(CuentaHabiente* propietario, float saldoInicial) {
        CuentaDeCheques* nuevaCuenta = new CuentaDeCheques(cuenta_cont++, saldoInicial, propietario);
        cuentas.insert(std::make_pair(nuevaCuenta->getNumeroCuenta(), nuevaCuenta));
        propietario->agregarCuenta(nuevaCuenta);
        return nuevaCuenta;
    }

    // Otros métodos para operar con los cuenta habientes y cuentas de cheques
};


*/