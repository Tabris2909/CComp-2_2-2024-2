#include<iostream>
using namespace  std;

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

void impPrimos(long long num){
    int i=2;
    while(i<num){
        if(esPrimo(i)){
            cout << i << ", " ;   
        }
        i++;
    } 
}

int main(){
    long long num;
    cout << "ingrese un numero: ";
    cin >> num;
    impPrimos(num);
}