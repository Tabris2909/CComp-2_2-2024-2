#include<iostream>
using namespace std;

int Fibonacci(int num){
    int x=0;
    int y=1;
    int z;

    while(x+y<num){
        z=x+y;
        cout << z ;
        x=y;
        y=z;
        if(x+y<num){
            cout << ", ";
        }
    }
}

int main(){
    int num;
    cout << "ingrese un numero: ";
    cin >> num;
    Fibonacci(num);
    return 0;
}