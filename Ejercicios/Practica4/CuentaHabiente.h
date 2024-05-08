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
    CuentaHabiente();
    CuentaHabiente(string name, string curp, int numero);
    void agregarCuenta(CuentaCheques* cuenta);

    void ObtenerCuentas();    
    void ImprimirReporte();

};

CuentaHabiente::CuentaHabiente(){
}

CuentaHabiente::CuentaHabiente(string name, string curp, int numero){
    this->nombre=name;
    this->curp=curp;
    this->numero=numero;
}

void CuentaHabiente::agregarCuenta(CuentaCheques* cuenta){
    cuentas.push_back(cuenta);
}

void CuentaHabiente::ObtenerCuentas(){
    cout<<"Propietario " <<this->nombre<<endl;
    for (auto it : cuentas){
        cout<<"Numero : "<< it->numero << " Saldo "<< it->saldo<< " Fecha de ultima modificacion "<< it->fecha_um;
    }
}

void CuentaHabiente::ImprimirReporte(){
    cout<<"Reporte"<<endl;
    cout<<"Numero de cuenta: "<<this->numero<<" Nombre de propietario : "<<this->nombre<< " Curp: "<< this->curp<<endl;
}
