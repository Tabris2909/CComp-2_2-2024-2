#include<iostream>
using namespace  std;
int main() {
    cout << "ingrese un numero: " ;
    int x, n=1, y=2;
    cin >> x;

    bool coma = false;  
    bool primo = true;

    while(n<x) {
        n+=1;
        while(y<=n){
            y+=1;
            if(x==n){
                break;
            }
            if(y%x==0){
                primo = false;
            }
            if(!primo){
                cout << n;
                primo = false;
            }
            if (!coma) {
                cout << ","; 
                coma = false; 
            }
        }
         
    }
    return 0;
}