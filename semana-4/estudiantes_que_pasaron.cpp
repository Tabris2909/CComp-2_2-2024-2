#include<iostream>
using namespace std;

int main(){
    unsigned int aprobados{0};
    unsigned int desaprobados{0};
    unsigned int contador{1};

    while(contador <= 10){
        cout << "para los aprobados ingrese 1, y para los desaprobados ingrese 2: ";
        int resultado;
        cin >> resultado;

        if(resultado==1){
            aprobados++;
        }
        else{
            desaprobados++;
        }
        contador++;
    }
    cout << "los estudiantes aprobados son: " << aprobados << " y son estudiantes desaprobados: " << desaprobados << endl;

    if(aprobados >= 10){
        cout << "el profe gana su bono" << endl;
    }
    else{
        cout << "el profe no gana su bono" ;
    }
    
}