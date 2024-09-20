#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int total{0};
    unsigned int contador{0};
    int nota;
    

    cout << "ingrese una nota o un -1 para terminar: ";
    cin >> nota;

    while (nota != -1){
        total= total + nota;
        contador++;
        cout << "Ingrese una nota o -1 para terminar: ";
        cin >> nota;
    }
    if(contador!=0){
        double final =(static_cast<double>(total)/contador);
        cout << "el total de las notas es de: " << total << endl;
        cout << "el conteo de notas es de: " << contador << endl;
        cout << "el promedio de las notas es de: " << final << endl; 
    }
    return 0;
}