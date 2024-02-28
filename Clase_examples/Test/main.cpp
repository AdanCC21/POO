#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "Persona.h"

int main()
{
    srand(time(NULL));
    Persona p1;
    p1=p1.crear();
    p1.saludar(p1);
}
