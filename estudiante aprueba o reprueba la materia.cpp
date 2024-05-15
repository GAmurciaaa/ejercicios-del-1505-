#include <iostream>

using namespace std;

int main()
{
    double nota1 = 0, nota2 = 0, nota3 = 0, nota4 = 0, nota5 = 0, nota6 = 0, prom = 0;
    double notaf1 = 0, notaf2 = 0, notaf3 = 0, notaf4 = 0, notaf5 = 0, notaf6 = 0;
    string nombre;
    
    cout << "Programa para saber si el estudiante aprobo o reprobo la materia\n";
    cout << "Ingrese el nombre del estudiante\n";
    
    cin >> nombre;
    
    cout << "Ingrese la nota 1\n";
    cin >> nota1;
    cout << "Ingrese la nota 2\n";
    cin >> nota2;
    cout << "Ingrese la nota 3\n";
    cin >> nota3;
    cout << "Ingrese la nota 4\n";
    cin >> nota4;
    cout << "Ingrese la nota 5\n";
    cin >> nota5;
    cout << "Ingrese la nota 6\n";
    cin >> nota6;
    
    notaf1 = (nota1/100)*10;
    notaf2 = (nota2/100)*10;
    notaf3 = (nota3/100)*15;
    notaf4 = (nota4/100)*20;
    notaf5 = (nota5/100)*20;
    notaf6 = (nota6/100)*25;
    
    prom = notaf1 + notaf2 + notaf3 + notaf4 + notaf5 + notaf6; 
    
    if(prom >= 6)
    {
        cout << "¡FELICIDADES! " << nombre << " aprobo la materia con " << prom;
    }
    else
    {
        cout << "El estudiante " << nombre << " reprobo la materia con " << prom;
    }

    return 0;
}