#include <iostream>
#include <thread>

#include <stdlib.h>
#include <time.h>

#include "Cuenta.h"
#include "Persona.h"

using std::cout;
using std::endl;

int main()
{
    // Creacion de Persona y CuentaDeCheques
    Persona propietario("Juan", 25);
    CuentaDeCheques cuenta("1234567890", propietario, 0.0f);

    Persona propietario2("Pedro", 30);
    CuentaDeCheques cuenta2("2345678901", propietario2, 100.0f);

    //Estado de cuenta
    cout << "Estado Inicial" << endl;
    cuenta.mostrarEstado();
    cuenta2.mostrarEstado();

    // Depositar y retirar
    std::this_thread::sleep_for(std::chrono::seconds(2)); //Esperamos 2 segundos
    cuenta.depositar(50.0f);
    cuenta2.retirar(50.0f);

    
    cout << "Despues de depositar y retirar" << endl;
    cuenta.mostrarEstado();
    cuenta2.mostrarEstado();

    // Transferir
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cuenta.transferir(&cuenta2, 25.0f);

    
    cout << "Despues de transferir" << endl;
    cuenta.mostrarEstado();
    cuenta2.mostrarEstado();

    // Reporte de cuentas
    cout << "Reporte de cuentas" << endl;
    cuenta.mostrarEstado();
    cuenta2.mostrarEstado();

    return 0;
}