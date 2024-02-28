#define _CRT_SECURE_NO_WARNINGS

#include <string>
#include <iostream>

#include <stdlib.h>
#include <time.h>

#include "persona.h"

using std::cout;
using std::endl;
using std::string;

class CuentaDeCheques
{
private:
    string numeroCuenta;
    Persona propietario;
    float saldo = 0.0f;
    string ultimaTransaccion;

public:
    CuentaDeCheques(const char *num, Persona &pers, float saldoInicial); 

    // Metodos
    void depositar(float cantidad);
    void retirar(float cantidad);
    void transferir(CuentaDeCheques *cuenta, float cantidad);
    void actualizarFecha();
    void mostrarEstado() const;

    // Getters y setters
    float getSaldo() const { return saldo; };
    string getNumeroCuenta() const { return numeroCuenta; };
    Persona getPropietario() const { return propietario; };
    string getUltimaTransaccion() const { return ultimaTransaccion; };

    void setUltimaTransaccion(const char *ultimaTransaccion);
};


CuentaDeCheques::CuentaDeCheques(const char *num, Persona &pers, float saldoInicial)
{
    numeroCuenta = num;

    propietario = pers;
    saldo = saldoInicial;

    time_t tm = time(0);
    char *fecha = ctime(&tm);
    ultimaTransaccion = fecha;
}

void CuentaDeCheques::setUltimaTransaccion(const char *time)
{
    ultimaTransaccion = time;
}

void CuentaDeCheques::actualizarFecha()
{
    time_t tm = time(0);
    char *fecha = ctime(&tm);
    setUltimaTransaccion(fecha);
}

void CuentaDeCheques::depositar(float cantidad)
{
    saldo += cantidad;
    actualizarFecha();
}

void CuentaDeCheques::retirar(float cantidad)
{
    (saldo >= cantidad) ? saldo -= cantidad : 0;
    actualizarFecha();
}

void CuentaDeCheques::transferir(CuentaDeCheques *cuenta, float cantidad)
{
    if (saldo >= cantidad)
    {
        saldo -= cantidad;
        cuenta->depositar(cantidad);

        actualizarFecha();
        cuenta->actualizarFecha();
    }
};

void CuentaDeCheques::mostrarEstado() const
{
    cout << "Propietario: " << propietario.GetNombre() << endl;
    cout << "Saldo: " << saldo << endl;
    cout << "Numero de cuenta: " << numeroCuenta << endl;
    cout << "Ultima transaccion: " << ultimaTransaccion << endl;
}