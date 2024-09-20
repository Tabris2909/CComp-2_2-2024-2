#include<iostream>
using namespace std;

bool esPrimo(long long x){
    long long y=2;
    long long z;
    if(x<=1) {
        return false;
    }
    while(y<x) {
        if(x%y==0){
            return false;
            }
        y++;
    }
    return true;
}

void facPrimo(long long num){
    long long a=2;
    while(a<=num) {
        if(esPrimo(a)){
            if(num%a==0){
                cout << a << ", ";
            }
        }
        a++;
    }
}

int main(){
    long long num, x;
    cout << "ingrese un numero: ";
    cin >> num;
    facPrimo(num);
}
