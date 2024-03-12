#pragma once
/*Hacemos uso de un template a la clase*/
template<class T>
class Pila{

    struct nodo{
        T dato;
        struct nodo *prev= nullptr;//Lo mismo que null solo que NULL es igual a 0
    };
    struct nodo *top=nullptr;
    
public:
    void push (T dato);
    T pop();
    T Peek();
    bool IsEmpty(){if(top==nullptr)return true;else return false;}
    ~Pila();//Destructor
};

#include <iostream>
using std::cout;
using std::endl;

//destructor
template<class T>
Pila<T>::~Pila()
{
    struct nodo* temp;
    while(top!=nullptr)
    {
        temp=temp;
        top=top->prev;
        delete temp;
    }
}

template<class T>
void Pila<T>:: push (T dato)
{
    struct nodo *newnodo = new struct nodo; //Asigno memoria
    if(newnodo==nullptr)
    {
        throw "memoria llena:(";
    }
    newnodo->dato=dato;
    newnodo->prev=top;
    top=newnodo;
}
template<class T>
T Pila<T>::Peek()
{
    if(top==nullptr)
    {
        throw "Pila vacia papu";
    }
    else
    {
        return top->dato;
    }
}
template<class T>
T Pila<T>::pop()
{
    if(top==nullptr)
    {
        throw "Pila Vacia pa";
    }
    else
    {
        auto*temp = top;
        top=temp->prev;
        T val=temp->dato;
        delete temp;
        return val;
    }
}