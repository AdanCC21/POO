#pragma once //Hace que namas lo compile una vez

class Persona {

    //Existen 3 tipos de proteccion
    /*Privated (default), protected, public*/
    /*Para poner un tipo de proteccion, se utiliza una palabra clave seguida de : antes de la declaracion de elementos*/
protected :
    int edad;
    char name[30];
    void comer();
public:
    
    void makereir(int motivo);
    void saludar();
    void reir();
};