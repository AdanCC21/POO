#pragma once

#include "Banco.h"
#include "CuentaHabiente.h"

class CuentaCheques{
public:
    int numero;
    int saldo;
    string fecha_um; //Ultima modificacion
    
    CuentaCheques();
    void Transferir(CuentaCheques* destiny, int amount);
    void Depositar(int amount);
    void Retirar(int amount);
    void Imprimir();

};

CuentaCheques::CuentaCheques() {
    std::time_t now = std::time(nullptr);
    this->numero = rand() % 9999999999999999 + 1;
    this->saldo = 0;
    this->fecha_um = std::ctime(&now);
}

void CuentaCheques::Retirar(int amount){
    cout<<"Cuenta actual "<< this->numero<<endl;
    this->saldo-=amount;
    cout<<"Saldo Retirado, usted quedo con : "<<this->saldo<<endl;
}

void CuentaCheques::Depositar(int amount){
    cout<<"Cuenta actual "<< this->numero<<endl;
    this->saldo+=amount;
    cout<<"Saldo Depositado, usted quedo con : "<<this->saldo<<endl;
}

void CuentaCheques::Transferir(CuentaCheques* destiny, int amount){
    this->saldo-=amount;
    destiny->saldo+=amount;
    cout<<"Usted quedo con " <<this->saldo<<" La otra cuenta quedo con "<<destiny->saldo<<endl;
}

void CuentaCheques::Imprimir(){
    cout<<"Numero "<< this->numero<< " Saldo "<< this->saldo << " Fecha de ultima modificacion "<< this->fecha_um<<endl;
}
