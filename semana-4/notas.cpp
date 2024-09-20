#include<iostream>
using namespace std;

int main(){
    int notas, total;
    unsigned int Contadordenotas = 1;

    while (Contadordenotas<11)
    {
        cout << "introduce tu nota: ";
        cin >> notas; 
        total=total+notas;
        ++Contadordenotas;
    }
    int resultado{total/10};

    cout << "\nEl total de las 10 notas calificadas es de " << total;
    cout << "\nEl promedio de la clase es de " << resultado;

    return 0;
}