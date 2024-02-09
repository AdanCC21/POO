#include <stdio.h>

typedef struct datos1 {
    char name[50];
    char app[50];
    char apm[50];
    int edad;
}Tdata;

int main()
{
    printf("oal chavo");
}

void create ()
{
    FILE *doc = fopen("archivo.dll","wb");
    if(doc)
    {
        fwrite();
    }
    else
    {
        printf("No encontrado\n");
    }

}