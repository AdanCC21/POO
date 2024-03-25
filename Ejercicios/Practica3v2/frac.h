#pragma once

#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::cout;
using std::endl;
using std::ostream;

class over{
    string den;
    string num;
    string res;

    over();

    over operator+(over fr);
};