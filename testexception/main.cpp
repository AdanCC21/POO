#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int dividiendo(int n, int d);

int main()
{
    int x,y;
    cout<< "dale el dividendo"<<endl;
    cin>>x;
    cout<<"dame el divisor"<<endl;
    cin>>y;
    int r;
    try{
        r=dividiendo(x,y);
        //Si no falla continua, si si, vale vrg, y se va al catch
        cout<< r<<endl;
    }catch(const char *e){
        cout<< e<<endl;
    }
}

int dividiendo(int n, int d)
{
    int r;
    /*En c++ una excepcion es un erro, cuando una noti de excepcion sea lanzada, quien invoque el codigo
    debe recibir esa notificacion y pudra hacer acciones para manejar el error
    Cuando un error ocurre, se interrumpe la ejecucion de la funcion*/
    if(d==0 || n==0)
    {
        /*Para lanzar la noti podemos usar throw, se supone que recibe la noti y se interrumpe la fucnion*/
        throw "El zapato";
    }
    r=n/d;
    return r;
}