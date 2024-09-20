#include<iostream>

using namespace std;

int main(){
    cout << "introduce un numero: " ;
    int x, y ;
    cin >> x ;

    while (x > 0){
        y= x;
        while(y >0 ){
            cout << "x";
            --y;
        }
        cout << endl;
        x -= 1;
    }
    
}