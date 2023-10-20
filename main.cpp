#include <iostream>
#include <string>

class BankAccount {
private:
    std::string accountNumber;
    std::string accountHolderName;
    double accountBalance;

public:
    // Constructor to initialize the account
    BankAccount(const std::string& accNumber, const std::string& accHolderName, double initialBalance) {
        accountNumber = accNumber;
        accountHolderName = accHolderName;
        accountBalance = initialBalance;
    }

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            accountBalance += amount;
            std::cout << "Deposited $" << amount << " successfully.\n";
        } else {
            std::cout << "Invalid deposit amount. Please deposit a positive amount.\n";
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= accountBalance) {
            accountBalance -= amount;
            std::cout << "Withdrawn $" << amount << " successfully.\n";
        } else if (amount > accountBalance) {
            std::cout << "Insufficient funds. Withdrawal not allowed.\n";
        } else {
            std::cout << "Invalid withdrawal amount. Please withdraw a positive amount.\n";
        }
    }

    // Method to display the account balance
    void displayBalance() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Holder: " << accountHolderName << std::endl;
        std::cout << "Account Balance: $" << accountBalance << std::endl;
    }
};

int main() {
    // Create an instance of the BankAccount class
    BankAccount myAccount("123456789", "John Doe", 1000.0);

    // Test the deposit and withdrawal functionality
    myAccount.displayBalance();
    myAccount.deposit(500.0);
    myAccount.displayBalance();
    myAccount.withdraw(200.0);
    myAccount.displayBalance();
    myAccount.withdraw(1500.0);

    return 0;
}
