#include <iostream>
#include <string>

using std::cout;
using std::endl;


/*Uso de templates o plantillas, tu le especificas el tipo de dato que va recibir usando datos genericos*/
template<class T> //T es un tipo de dato generico que no esta especificado pues
void swap (T &a,T &b);
/*A la hora de invocarlo se le aplicara el tipo de valor que le especifique a las variables de los parametros
eje swamp<int>(x,y),se le aplicara el tipo int a x y y, incluso puedes no especificarlo y jala aun*/

int main()
{
    int x = 10;
    int y = 666;

    cout<<"x: "<<x<<" y: "<<y<<endl;
    swap<int>(x,y);
    cout<<"x: "<<x<<" y: "<<y<<endl;

    float o=10.0f;
    float pi=3.1416f;

    cout<<"O :"<<o<<" pi: "<<pi<<endl;
    swap<float>(o,pi);
    cout<<"O :"<<o<<" pi: "<<pi<<endl;

}
template<class T>
void swap(T &a,T &b)
{
    T t;
    t=a;
    a=b;
    b=t;
}



