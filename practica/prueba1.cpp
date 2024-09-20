#include <iostream> // Necesario para usar cin y cout

// Este programa calcula el producto de tres enteros
int main() {
    // Declaración de variables e inicialización a 0
    int x = 0; 
    int y = 0; 
    int z = 0; 
    int resultado = 0;

    // Solicitar al usuario que ingrese tres enteros
    std::cout << "Ingrese tres números enteros: ";

    // Leer tres enteros del teclado y almacenarlos en las variables x, y y z
    std::cin >> x >> y >> z;

    // Calcular el producto de los tres enteros y asignar el resultado a la variable resultado
    resultado = x * y * z;

    // Imprimir "El producto es " seguido por el valor de la variable resultado
    std::cout << "El producto es " << resultado << std::endl;

    // Devolver un valor desde main indicando que el programa terminó exitosamente
    return 0;
}
