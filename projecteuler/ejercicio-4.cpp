#include<iostream>
using namespace std;

bool esPalindromo(int num){
    int x=num;
    int y=0;
    while(num>0){
        y=y*10+num%10;
        num/=10;
    }
    return x == y;
}
void PalindromoMayor3(){
    int z=999;
    int d=0;
    int val1,val2;
    while(z>=100){
        int w=999;
        while(w>=100){
            int r=z*w;
            if(esPalindromo(r) && r>d){
                d=r;
                val1=z;
                val2=w;
            }
            w--;
        }
        z--;
    }
    cout << "el palindromo es: " << d << endl;
    cout << "los productos son: " << val1 << " * " << val2;
}


int main(){
    int num;
    PalindromoMayor3();
    return 0;
}