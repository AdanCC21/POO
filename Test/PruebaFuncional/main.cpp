#include <iostream>
#include <functional>
#include <time.h>
#include <stdlib.h>
#include <vector>

using std::cout;
using std::endl;
using std::function;
using std::vector;

void saludar();
void saludar2(function<void(void)>fs);
void saludo3();

int countPar(vector<int> v);
int counter(vector<int> v, function<bool(int)>p);

vector<int>extraerPar(vector<int>v);
vector<int>extraerPar(vector<int>v,function<bool(int)>p);

bool par(int n);
bool esPrimo(int x);
std::ostream& operator<<(std::ostream& out, vector<int> v);

int main()
{
    saludar();
    /*Podemos asociar una funcion a una variable*/
    cout<<endl;
    function<void(void)>f=saludar;
    f();
    /*Podemos enviarlas como parametros*/
    saludar2(f);
    cout<<endl;
    saludar2(saludo3);

    vector<int> numeros={6,9,11,666,85,42,1,8,2,25,21,777};
    int par;
    par=countPar(numeros);
    cout<<"Vector " <<numeros<<endl;
    cout<<"hay "<<par<<"Pares"<<endl;
}

bool par(int n)
{
    if(n==2 || n==3)
    {
        return true;
    }
    else
    {
        if(n%2==0||n==1||(n%3)==0)
        {
            return false;
        }
        //Me falto jaja
        
    }
}

bool esPrimo(int x)
{
    if(x==1 || x%2==0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int countPar(vector<int> v){
    int contador=0;
    for(int n:v){
        if(n%2==0)
        {
            contador++;
        }
    }
    return contador;
}

int counter(vector<int> v, function<bool(int)>p)
{
    int contador=0;
    for(int n:v){
        if(p(n)==true)
        {
            contador++;
        }
    }
    return contador;
}

vector<int>extraerPar(vector<int>v)
{
    vector<int>par;
    for(int n:v){
        if(n%2==0)
        {
            par.push_back(n);
        }
    }
}

vector<int>extraerPar(vector<int>v,function<bool(int)>p)
{
    vector<int>par;
    for(int n:v){
        if(p(n)==true)
        {
            par.push_back(n);
        }
    }
}




std::ostream& operator<<(std::ostream& out, vector<int> v)
{
    out<<"[ ";
    for(int n:v)
        cout<<n<<" ";
    cout<< "]";
    return out;
}

void saludar()
{
    cout<<"HOLA MUNDO"<<endl;
}

void saludar2(function<void(void)>fs)
{
    cout<<"Te voy a saludar"<<endl;
    cout<<"preparate"<<endl;
    fs();
    cout<<"Sale"<<endl;
}

void saludo3()
{
    srand(time(0));
    
    if((rand()%100)<50)
    {
        cout<< "que hubo"<<endl;
    }
    else
    {
        cout<<"Hola naca"<<endl;
    }
}

