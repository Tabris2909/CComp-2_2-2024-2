#include <iostream>
#include <string>
using namespace std;

class Person{
    private:
        int age;
    public:
    void setAge(int personAge){
        age = personAge;
    }

    int getAge() const{
        return age;
    }
        
    int getDoublePerson() const{
        return age + (age * 2) ;
    }
};

int main() {
    Person person;
    int userAge;

    cout << "ingrese su edad: " ;
    cin >> userAge;
    person.setAge(userAge);
    
    cout << "\nsu edad es: " << person.getAge() << endl;
    cout << "\nsu edad mas el doble es: " << person.getDoublePerson() << endl;


}