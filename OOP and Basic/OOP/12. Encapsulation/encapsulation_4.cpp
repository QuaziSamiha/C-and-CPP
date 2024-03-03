/*
Problem: Implement a class BankAccount with private
attributes for balance and account number. Ensure
that the balance cannot go negative.
*/
#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
    int accountNumber;

public:
    // constructor
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
        }
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account(12345, 1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);

    cout << "Account Balance: $" << account.getBalance() << endl;

    return 0;
}

