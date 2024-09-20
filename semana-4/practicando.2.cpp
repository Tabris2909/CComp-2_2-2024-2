#include<iostream>

using namespace std;

int main(){
    cout << "ingrese un numero: " ;
    int x ;
    cin >> x ;
    if(x>100) {
        cout << "su numero es mayor a 100" ;
    }
    else if(x>50){
        cout << "su numero es mayor a 50" ;
    }
    else if(x>20) {
        cout << "su numero es mayor a 20" ;
    }
    else if(x>10) {
        cout << "su numero es mayor a 10" ;
    }
    else{
        cout << "su numero es menor o igual 10" ;
    }
    return 0;
}