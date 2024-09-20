#include <iostream>
using namespace std;


class BankAccount {
private:

    string accountHolderName;
    double balance;

public:
    
    BankAccount(string name, double initialBalance) {
        accountHolderName = name;
        balance = initialBalance;
    }

    
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: $" << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

   
    void displayBalance() const {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {

    BankAccount account("John Doe", 500.0);

    account.displayBalance(); 

    account.deposit(200.0);    
    account.displayBalance();  

    account.withdraw(100.0);   
    account.displayBalance();  

    account.withdraw(700.0);    
    account.displayBalance();  

    return 0;
}
