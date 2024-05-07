#include "Banco.h"
#include "CuentaHabiente.h"
#include "CuentaCheques.h"
#include "libad.h"

int main(){
    srand(time(nullptr));

    
    string us1="Adan";
    string us1Curp="GOCA041018HBCNSDA4";
    int us1Num=200;
    string us2="maria";

    CuentaHabiente Us1(us1,us1Curp,us1Num);
    
}