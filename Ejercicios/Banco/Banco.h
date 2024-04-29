#pragma once

#include <iostream>
#include <string.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Banco{
public:
    string name;
    string ch_cont; //Numero de cuentas creadas consecuentemente
    string couenta_cont;
    
    void ImprimirReporte();
    
    void CrearCuentaHabiente();
    void ObtenerCuentaHabiente();

    void CrearCuenta();
    void ObtenerCuenta();
    
    void Depositar(string NumAccount, int amount);
    void Retirar(string NumAccount,int amount);
    void Transferir(string NumOrigin,string NumDestiny,int amount);

};

class CuentaDeCheques : public Banco{
public:
    int numero;
    float saldo;
    string fecha;

    void Depositar();
    void Retirar();
    void Transferir();
    void Imprimir();
};

//Almacenada en un mapa
//Llave sera el numero de cuenta y el valor sera el apuntador alobjeto dde tipo cuenta correspondiente.
class CuentaHabiente : public CuentaDeCheques{
    int numero;
    string curp;

    void ObtenerCuenta();
    void ImprimirReporte();
};
