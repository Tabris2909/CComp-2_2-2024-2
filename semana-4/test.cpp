#include<iostream>
using namespace std;

int main() {
    cout << "Ingrese un número: ";
    int x;
    cin >> x;

    bool coma = false; // Inicializamos coma como falso para evitar una coma al principio

    // Iteramos desde 2 hasta x-1 para encontrar números primos
    for (int n = 2; n < x; n++) {
        bool primo = true; // Asumimos que el número es primo

        // Verificamos si n es divisible por algún número entre 2 y n-1
        for (int y = 2; y * y <= n; y++) {
            if (n % y == 0) {
                primo = false; // Si encontramos un divisor, no es primo
                break;
            }
        }

        // Si el número es primo, lo imprimimos
        if (primo) {
            if (coma) {
                cout << ", "; // Imprimir coma antes del siguiente número
            }
            cout << n;
            coma = true; // A partir del primer número, las comas deben aparecer
        }
    }

    cout << endl; // Salto de línea al final
    return 0;
}
