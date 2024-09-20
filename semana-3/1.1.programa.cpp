#include <iostream>
#include <string>
#include "1.2.Account.h"
using namespace std;

int main(){
    Account myAccount;

    cout << "Initial account name is: " << endl;

    cout << "\nPlease enter the account name: ";
    string theName;
    getline(cin, theName);
    myAccount.setName(theName);

    cout << "\nName in Object myAccount is: " << myAccount.getName() << endl;

}