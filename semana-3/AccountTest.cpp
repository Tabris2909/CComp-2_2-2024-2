//AccountTest.cpp
#include <iostream>
#include <string>
#include "AccountBeta.h"

using namespace std;

int main(){
    Account account1{"Jane Green"};
    Account account2{"Jhon Blue"};

    cout << "account1 name is: " << account1.getName() << endl;
    cout << "account1 name is: " << account2.getName() << endl;  
    
    return 0;
}