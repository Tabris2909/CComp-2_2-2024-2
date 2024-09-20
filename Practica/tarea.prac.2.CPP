#include <iostream>
using namespace std;

int main(){
    cout << "ingresa un numero: " ;
    int N=0, x=0, y=0;
    cin >> N;

    bool coma = true;

    while(x<N){
        x +=1;
        if(x==N){
            break;
        }
        if(x%2!=0){
            if(!coma){
                cout << "," ;
            }
            cout << x;
            coma = false;   
        }
    }

    return 0;
}