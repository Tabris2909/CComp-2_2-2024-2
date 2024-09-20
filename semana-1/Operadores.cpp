#include <iostream>
using namespace std;

int main(){
    int num1;
    int num2;

    cout << "introduce un numero: " ;
    cin >> num1;
    cout << "introduce otro numero: " ;
    cin >> num2;

    cout << "la suma es: " << num1 + num2 << endl;
    cout << "la resta es: " << num1 - num2 << endl;
    cout << "la multiplicacion es: " << num1 * num2 << endl;
    cout << "La division es: " << num1 / num2 << endl;
    cout << "el residuo de la division es: " << num1 % num2 << endl;

    return 0;
}