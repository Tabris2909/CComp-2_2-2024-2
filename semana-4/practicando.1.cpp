#include<iostream>
#include<string>

using namespace std;

int main() {
    cout <<"introduce un numero: ";
    int x, y, z ;
    cin >> x;
    switch (x) {
    case 1:
        cout << "Seleccionaste la opción 1";
        break;
    case 2:
        cout << "Seleccionaste la opción 2";
        break;
    default:
        cout << "Opción no válida";
        break;
    }
    return 0;
}