#include<iostream>
using namespace std;

int main() {

    float base, altura;
    cout<<"Ingrese la base del triangulo: ";
    cin>>base;
    cout<<"Ingrese la altura del triangulo: ";
    cin>>altura;
    float area = (base*altura)*0.5; //calcular el area
    cout<<"El area del triangulo es: "<<area<<"\n";

    return 0;

}
