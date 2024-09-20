#include<iostream>
using namespace std;

bool esPrimo(long long x){
    long long y=2;
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

long long indPrimo(long long n){
    long long w=0;
    long long q=n;
    long long k=2;
    while (w<n){
        if(esPrimo(k)){
            cout << k << ", ";
            w++;
        }
        k++;
    }
}

int main(){
    long long n;
    cout << "ingrese un numero y te dare su primo correspondiente: " ;
    cin >> n ;
    indPrimo(n);
}