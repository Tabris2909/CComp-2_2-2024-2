#include<iostream>
using namespace  std;
int main(){
    cout << "ingrese un numero: " ;
    int x, n=0, total=0;
    cin >> x;

    bool coma = true;

    while(n<x){
        n+=1;
        if(x==n){
            break;
        }
        if(n%5==0 || n%3==0 ){
            if (!coma) {
                cout << ", "; 
            }
           cout << n ; 
           total=total+n;  
           coma = false;     
           
        }
        
    }
    cout << "\nla suma es de: " << total; 
    return 0;
}