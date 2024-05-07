#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    map<string, int> per;

    /*
    Su sintaxis es, map <valor clave, contenido>
    No hay indices, los elementos se guian por su clave
    para acceder al primero es per->first y al segundo pues per->second
    Hay funciones como celar, empty, size, erase(clave), per[3] o per.at(3) accedes al elemento con la clave 3
    per.insert(clave, contenido) o per[clave] = contenido, el begin y end para los iteradores y ya creo
    */


    string t_name;
    int t_edad;
    cout << "Ingresa tu nombre"<< endl;
    cin >> t_name;
    cout << "Ingresa tu edad"<< endl;
    cin >> t_edad;

    per[t_name] = t_edad;
    per["Pablo"] = 20;

    for (auto i=per.begin();i != per.end(); i++){
        cout<<"Nombre "<< i->first<< " Edad " << i->second << endl;
    }

    

}
