#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <map>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::srand;
using std::time;
using std::ctime;
using std::rand;
using std::time_t;
using std::string;
using std::map;
using std::vector;

#include "CuentaHabiente.h"
#include "CuentaCheques.h"

class Banco{
public:
    string name;
    int ch_cont; //Contador consecutivo de las cuentas creadas
    int chc_cont; //Contador consecutivo de las cuentas creadas

    map<int, CuentaCheques*>cuentas;
    map<int, CuentaHabiente*>usuarios;

    Banco();
    CuentaCheques* createCuentaCheques(CuentaHabiente* pers);
    CuentaHabiente* createCuentaHabiente(string name, string curp, int numero);

    void ObtenerCuentas(CuentaHabiente* pers);
    void ObtenerCuentaHabiente(int num);
    void ImprimirReporte(CuentaHabiente* pers);

    void Depositar(CuentaCheques* destiny, int amount);
    void Retirar(CuentaCheques* destiny, int amount);
    void Transferir(CuentaCheques* base,CuentaCheques* destiny, int amount);


};

Banco::Banco()
{
    this->name="CimaBank";
    this->ch_cont=0;
    this->chc_cont=0;
}

CuentaHabiente* Banco::createCuentaHabiente(string name, string curp, int numero){
    ch_cont++;
    auto *cuenta = new CuentaHabiente(name,curp,numero);
    usuarios[numero]=cuenta;
    return cuenta;
}

CuentaCheques* Banco::createCuentaCheques(CuentaHabiente* pers){
    chc_cont++;
    auto *cuenta = new CuentaCheques();
    pers->agregarCuenta(cuenta);
    cuentas[chc_cont]=cuenta;
    return cuenta;
}

// Estas 2 pues se obtienen con las 2 funciones de arriba ----
void Banco::ObtenerCuentaHabiente(int num){
    cout<<"Usuario :"<<this->usuarios[num]->nombre<<" Curp: "<< this->usuarios[num]->curp<<" Numero: "<< this->usuarios[num]->numero<<endl;
}

void Banco::ObtenerCuentas(CuentaHabiente* pers){
    pers->ObtenerCuentas();
}
// ---------
void Banco::ImprimirReporte(CuentaHabiente* pers){
    pers->ImprimirReporte();
}

void Banco::Depositar(CuentaCheques* destiny, int amount){
    destiny->Depositar(amount);
}

void Banco::Retirar(CuentaCheques* destiny, int amount){
    destiny->Retirar(amount);
}

void Banco::Transferir(CuentaCheques* base,CuentaCheques* destiny, int amount){
    base->Transferir(destiny,amount);
}
