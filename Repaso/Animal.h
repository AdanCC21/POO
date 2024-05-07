#pragma once

#include <iostream>
#include <string.h>
#include <string>

using namespace std;

class Animal{
public:
    virtual void Sound() const=0;
};

class Dog : public Animal{
    void Sound() const override{

    }
};
