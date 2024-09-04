#include <iostream>
#include <string>

class Person {
    // Atributo privado
    private:
        std::string name;

    // Métodos públicos
    public:
        // Método set para asignar un valor al atributo privado
        void setName(std::string personName) {
            name = personName;
        }

        // Método get para obtener el valor del atributo privado
        std::string getName() const {
            return name;
        }
};

int main() {
    Person person;

    // Usando el método set para establecer el nombre
    person.setName("Alice");

    // Usando el método get para obtener e imprimir el nombre
    std::cout << "The person's name is: " << person.getName() << std::endl;

    return 0;
}
