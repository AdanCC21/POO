#include <iostream>
#include <string>
#include <sstream>

#include <string.h>
#include <time.h>
#include <stdlib.h>

#include "Fraccion.h"

using std::cout;
using std::endl;

int main()
{
    Fraccion temp={0,0};
    Fraccion op1={1,2};
    Fraccion op2={5,5};
    temp=op1+op2;
    cout<< temp.y <<temp.x << endl;
    
}