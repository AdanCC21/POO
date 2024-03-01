#pragma once
class Pila{

    struct nodo{
        int dato = 0;
        struct nodo *prev= nullptr;//Lo mismo que null solo que NULL es igual a 0
    };

    struct nodo *top=nullptr;
public:
    void push (int dato);
    int pop();
    bool IsEmpty(){if(top==nullptr)return true;else return false;}
    ~Pila();//Destructor
};

#include <iostream>
using std::cout;
using std::endl;

//destructor
Pila::~Pila()
{
    struct nodo* temp;
    while(top!=nullptr)
    {
        temp=temp;
        top=top->prev;
        delete temp;
    }
}

void Pila:: push (int dato)
{
    struct nodo *newnodo = new struct nodo; //Asigno memoria
    newnodo->dato=dato;
    newnodo->prev=top;
    top=newnodo;
}

int Pila::pop()
{
    if(top==nullptr)
    {
        cout << "Pila vacia pa"<< endl;
        return 0;
    }
    else
    {
        struct nodo*temp = top;
        top=temp->prev;
        int val=temp->dato;
        delete temp;
        return val;
    }
}