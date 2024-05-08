#include "Banco.h"
#include "CuentaHabiente.h"
#include "CuentaCheques.h"
#include "libad.h"

int main(){
    srand(time(nullptr));
    
    Banco Bank;

    string us1n="Adan";
    string us1Curp="GOCA041018HBCNSDA4";
    int us1Num=200;
    string us2="maria";

    CuentaHabiente* us1 = Bank.createCuentaHabiente(us1n,us1Curp,us1Num);
    CuentaCheques* us1c = Bank.createCuentaCheques(us1);
    CuentaCheques* us2c = Bank.createCuentaCheques(us1);
    Bank.ObtenerCuentaHabiente(us1->numero);
    us1->ObtenerCuentas();
    system("Pause");
    cout<<endl;
    Bank.Depositar(us1c,300);
    cout<<endl;
    Bank.Depositar(us2c,300);
    cout<<endl;
    Bank.Retirar(us1c,50);
    cout<<endl;
    Bank.Transferir(us1c,us2c,50);
    cout<<endl;

    system("Pause");
    Bank.ImprimirReporte(us1);
    cout<<endl;
    
    
}