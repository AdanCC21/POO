#include <stdio.h>

int main()
{
    int x=3;
    int *ptr=&x;
    *ptr=5;
    printf("%d\n",*ptr);
    printf("%d",ptr);
    
    // char *name;
    // printf("Pon el Nombre");
    // gets(name);
    // printf("%s",name);
}