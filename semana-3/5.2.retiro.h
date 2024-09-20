#include <string>

class Account {
    public:
        explicit Account(std::string accountName, int initialBalance)
                : name{accountName} {
            if(initialBalance > 0) {
                balance = balance + initialBalance;
            }
        }

        void deposit(int depositAmount) {
            if(depositAmount > 0) {
                balance = balance + depositAmount;
            }
        }

        void Withdrawal(int WithdrawalAmount){
            if(WithdrawalAmount > balance){
                std::cout << "Withdrawal amount axceeded account balance"<< std::endl;
            }
            else{
                balance = balance - WithdrawalAmount;
            }
        }

        int getBalance() const {
            return balance;
        }

        void setName(std::string accountName) {
            name = accountName;
        }
        std::string getName() const {
            return name;
        }
    private:
        std::string name;
        int balance{0};
};