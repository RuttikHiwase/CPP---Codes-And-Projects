#include <iostream>
#include <cstdlib>

using namespace std;

class BankAccount {
private:
    string accountHolderName;
    long accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string name, long accNumber, double initialBalance) {
        accountHolderName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully. New balance: $" << balance << endl;
        } else {
            cout << "Invalid amount for deposit." << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully. New balance: $" << balance << endl;
        } else {
            cout << "Invalid amount for withdrawal or insufficient balance." << endl;
        }
    }

    // Function to check balance
    void checkBalance() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    // Creating a bank account
    BankAccount myAccount("John Doe", 123456789, 1000.0);

    // Menu for user interaction
    int choice;
    double amount;

    do {
        cout << "\nBank Management System Menu\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the amount to deposit: $";
                cin >> amount;
                myAccount.deposit(amount);
                break;

            case 2:
                cout << "Enter the amount to withdraw: $";
                cin >> amount;
                myAccount.withdraw(amount);
                break;

            case 3:
                myAccount.checkBalance();
                break;

            case 4:
                cout << "Exiting the program. Thank you!\n";
                break;

            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (choice != 4);

    return 0;
}

