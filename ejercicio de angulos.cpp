#include <iostream>

using namespace std;

int main()
{
    double a1 = 0, a2 = 0, a3 = 0, a = 180;
    

    cout << "Programa para calcular el tercer angulo\n";
    cout << "ingrese el primer angulo\n";

    cin >> a1;

    cout << "ingrese el segundo angulo\n";

    cin >> a2;

    if(a1 <= 0 || a2 <= 0)
    {
        cout << "los valores de los angulos no pueden ser negativos o iguales a 0\n";
    }
    else
    {
        a3 = a-(a1+a2);

        cout << "El valor del tercer angulo es: " <<a3;
    }

    return 0;
}