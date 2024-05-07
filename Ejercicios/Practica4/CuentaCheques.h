#pragma once

#include "Banco.h"
#include "CuentaHabiente.h"

class CuentaCheques{
public:
    int numero;
    int saldo;
    string fecha_um; //Ultima modificacion
    
    CuentaCheques();

};

CuentaCheques::CuentaCheques() {
    std::time_t now = std::time(nullptr);
    this->numero = rand() % 9999999999999999 + 1;
    this->saldo = 0;
    this->fecha_um = std::ctime(&now);
}