#include <iostream>

using namespace std;

int main()
{
    int edad = 0;
    
    cout << "Programa para saber si el usuario es mayor de edad o no\n";
    cout << "ingrese su edad\n";
    
    cin >> edad;
    
    if(edad >= 18)
    {
        cout << "Es mayor de edad\n";
    }
    else
    {
        cout << "Es menor de edad\n";
    }

    return 0;
}