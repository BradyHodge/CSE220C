#include <iostream>
#include <string>
#include <iomanip>

int main() {
    int accountId = 0;
    std::string accountName;
    double balance;

    std::cout << "Enter the name: ";
    std::getline(std::cin, accountName);

    std::cout << "Enter the balance: ";
    std::cin >> balance;

    int choice;
    do {
        std::cout << "\nAccount Menu:\n";
        std::cout << "0. Quit Program\n";
        std::cout << "1. Display Account Information\n";
        std::cout << "2. Add a deposit to an account\n";
        std::cout << "3. Withdraw from an account\n";
        std::cout << "Your choice: ";
        std::cin >> choice;

        switch (choice) {
        case 0:
            break;

        case 1: {
            std::cout << std::fixed << std::setprecision(2);
            std::cout << "Account ID: " << accountId
                << "  Name: " << accountName
                << "  Balance: $" << balance << std::endl;
            break;
        }

        case 2: {
            double depositAmount;
            std::cout << "Amount to deposit: ";
            std::cin >> depositAmount;
            balance += depositAmount;
            break;
        }

        case 3: {
            double withdrawAmount;
            std::cout << "Amount to withdraw: ";
            std::cin >> withdrawAmount;
            balance -= withdrawAmount;
            break;
        }

        default:
            std::cout << "Invalid choice. Please try again.\n";
            break;
        }

    } while (choice != 0);

    return 0;
}