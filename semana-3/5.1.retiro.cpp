#include <iostream>
#include <string>
#include "5.2.retiro.h"

using namespace std;

int main() {
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    cout << "account1: " << account1.getName() << " balance is $"
                << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
                << account2.getBalance();


    cout << "\n\nEnter deposit amount for account1: ";
    int WithdrawalAmount;
    cin>> d}WithdrawalAmount;

    cout << "adding " << WithdrawalAmount << " to account1 balance.";
    account1.deposit(WithdrawaldepositAmount);
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
                << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
                << account2.getBalance();


    cout << "\n\nEnter deposit amount for account2: ";
    cin >> WithdrawalAmount;

    cout << "adding " << depositAmount << " to account2 balance.";
    account2.deposit(depositAmount);
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
                << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
                << account2.getBalance();

    cout << "\n\nWithsrawal amount for account1: ";
    int WithdrawalAmount;
    cin >> WithdrawalAmount;
    account1.Withdrawal(WithdrawalAmount);

    cout << "\n\naccount1: " << account1.getName() << " balance is $"
                << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
                << account2.getBalance();

    cout << "\n\nWithsrawal amount for account1: ";
    int WithdrawalAmount;
    cin >> WithdrawalAmount;
    account1.Withdrawal(WithdrawalAmount);
    
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
                << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
                << account2.getBalance();



    return 0;
}