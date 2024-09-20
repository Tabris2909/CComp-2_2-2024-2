#include<iostream>

using namespace std;
int main(){
    cout << "introduce un numero: " ;
    int x;
    int y=0;
    cin >> x;
    while(x){
        y=y+x ;
        cout << "introduce un numero: " ;
        cin >> x ;
    }
    if(x==0){
        cout << "su numero es: " << y ;
    }
    return 0;
}
