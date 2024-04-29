#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include <string.h>
#include <string>
#include <stack>//Pilas
#include <queue>//Colas

//Pilas
//Colas, Colas dobles y Colas de prioridad

//Cola,back()sabemos quein es el final
//cola.front sabes quien esta enfrente
//cola.size()
//cola.push()
//Cola.empty()
//Cola.front()
//Cola.pop saca el de alfrente

//cola.emplece es lo mismo que push, pero sin crear una copia, push crea una copia y la envia
//cola.push_back
//cola.push_front

using namespace std;


using std::cout;
using std::endl;
using std::cin;
using std::stack;
using std::string;

void stack1();
void stack2();
void stack4(){
    deque<int> cola;
    bool alt=true;
    int n;
    while(true)
    {
        cout<<"Dame un numero(-1 para salir)"<<endl;
        cin>>n;
        if(n==-1)
        {
            break;
        }
        cola.push_back(n);
    }
    
}

int main()
{
    
    stack2();
}

void stack1()
{
    stack<int>pila;
    int n;
    while(true)
    {
        cout<<"Dame un numero(-1 para salir)"<<endl;
        cin>>n;
        if(n==-1)
        {
            break;
        }
        pila.push(n);
    }
    cout<<"cantidad de elementos agregados a la pila "<<pila.size()<<endl;
    cout<<"elemento en el tope de pila "<<pila.top()<<endl;
    while(!pila.empty())//Verdadera si esta vacia, falso si esta lleno
    {
        cout<<" "<<pila.top()<<endl;
        pila.pop();
    }
    cout<<endl;
}

void stack2()
{
    string frase;
    cout<<"Dime una frase"<<endl;
    std::getline(cin, frase);
    

    stack<char>pila;
    for(int i=0;i<frase.size();i++)
    {
        if(frase[i]!=' ')
        {
            pila.push(frase[i]);
        }
    }
    bool palindromo = true;
    //Va a iterar
    for(char c:frase)
    {
        if(c!=' ') continue;//Solo se salto este paso una vez y pasa al siguiente
        {
            if(c!=pila.top())
            {
                palindromo= false;
                break;
            }
            pila.pop();
        }
    }
    if(palindromo==true)
    {
        cout<<"\""<< "Verdadero"<<"\""<<endl;
    }
    else
    {
        cout<<"\""<< "Falso"<<"\""<<endl;
    }
}