#include <iostream>

using namespace std;

int main()
{
    int *ptr;
    int x=30;
    ptr=&x;

    cout<< *ptr<<endl;
    cout<< ptr<<endl;
    cout<< &ptr<<endl;


}