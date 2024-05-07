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
    string name;
    int ch_cont; //Contador consecutivo de las cuentas creadas
    int chc_cont; //Contador consecutivo de las cuentas creadas

    map<int, CuentaCheques*>cuentas;
    map<int, CuentaHabiente*>usuarios;

    Banco();
    CuentaCheques* createCuentaCheques();
    CuentaHabiente* createCuentaHabiente(string name, string curp, int numero);
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
    usuarios[ch_cont]=cuenta;
    return cuenta;
}

CuentaCheques* Banco::createCuentaCheques(){
    chc_cont++;
    auto *cuenta = new CuentaCheques();
    // Agregar cunta al usuario
    cuentas[chc_cont]=cuenta;

    return cuenta;
}

