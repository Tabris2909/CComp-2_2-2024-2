//AccountTest.cpp
#include <iostream>
#include <string>
#include "4.2.AccountBeta.h"

using namespace std;

int main(){
    Account account1{"Jane Green" };
    Account account2{"Jhon Blue" };
    Account account3{"Dani Bird" };

    cout << "account1 name is: " << account1.getName() << endl;

    cout << "account2 name is: " << account2.getName() << endl;

    cout << "account3 name is: " << account3.getName() << endl; 


    return 0;
}