#include<iostream>
#include <string>
using std::string;
using namespace std;

int main() {
    int a = 5;
    //Declarar una cadena
    char b[]="Esto es una cadena";
    //Inicializar la cadena b

    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<b[0]<<"\n";
    cout<<b[4]<<"\n";

    int numeros[]={4, 8, 9, 5, 6, 7};
    cout<<numeros[0]<<"\n";

    float numero{5.16};
    cout<<numero<<"\n";

    return 0;

}