#pragma once

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#include "Persona.h"
#include "libad.h"

using std::cin;
using std::cout;
using std::endl;

class Cheques
{
protected:
    char propietario[100];
    int num_cuenta;
    int saldo;
    // Ultima transaccion
    char fecha[50];
public:
    int cheques;
};

void accont(Cheques persona)
{
    // persona.num_cuenta = rand() % (100 - 0 + 1) + 0
}

void depositar(persona prop)
{
    
}

void retirar()
{
}

void transferencia()
{
    
}