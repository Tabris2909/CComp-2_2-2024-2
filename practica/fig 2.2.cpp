#include <iostream>

int main() {
    // \n - Nueva línea
    std::cout << "Hola,\nMundo!\n";

    // \t - Tabulación horizontal
    std::cout << "Columna 1\tColumna 2\tColumna 3\n";

    // \r - Retorno de carro
    std::cout << "Primera línea.\rSobrescrito!\n";

    // \a - Alerta (puede no ser audible en todos los sistemas)
    std::cout << "Esto hará sonar el sistema bell.\a\n";

    // \\ - Barra invertida
    std::cout << "Este es un backslash: \\\n";

    // \' - Comilla simple
    std::cout << "Este es un carácter de comilla simple: \' \n";

    // \" - Comilla doble
    std::cout << "Este es un carácter de comilla doble: \" \n";

    return 0;
}
