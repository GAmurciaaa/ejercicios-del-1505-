#include <iostream>

using namespace std;

int main()
{
    double grados = 0;
    
    cout << "programa para saber el tipo de angulo que es según sus grados\n";
    cout << "ingrese el valor de su angulo\n";
    
    cin >> grados;
    
    if(grados <= 0 || grados > 360)
    {
        cout << "el valor debe ser mayor a 0 e igual o menor a 360\n";
    }
    else if(grados < 90)
    {
        cout << "El angulo con valor " << grados << " es agudo\n";
    }
    else if(grados == 90)
    {
        cout << "El angulo con valor " << grados << " es recto\n";
    }
    else if(grados > 90)
    {
        cout << "El angulo con valor " << grados << " es obtuso\n";
    }

    return 0;
}