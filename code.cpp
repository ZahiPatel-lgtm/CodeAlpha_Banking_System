#include <iostream>
using namespace std;

class Customer
{
public:
    string name;
    int customerID;

    void createCustomer()
    {
        cout << "Enter Customer Name: ";
        cin >> name;

        cout << "Enter Customer ID: ";
        cin >> customerID;
    }
};

class Account
{
private:
    float balance;

public:
    int accountNumber;

    Account()
    {
        balance = 0;
    }

    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Account Created Successfully!" << endl;
    }

    void deposit()
    {
        float amount;

        cout << "Enter Amount to Deposit: ";
        cin >> amount;

        balance = balance + amount;

        cout << "Amount Deposited Successfully!" << endl;
    }

    void withdraw()
    {
        float amount;

        cout << "Enter Amount to Withdraw: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawal Successful!" << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    void displayBalance()
    {
        cout << "Current Balance: " << balance << endl;
    }
};

class Transaction
{
public:
    void transferFunds()
    {
        float amount;

        cout << "Enter Amount to Transfer: ";
        cin >> amount;

        cout << "Fund Transfer Successful!" << endl;
    }
};

int main()
{
    Customer c;
    Account a;
    Transaction t;

    int choice;

    c.createCustomer();
    a.createAccount();

    do
    {
        cout << "\n----- Banking System -----" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Transfer Funds" << endl;
        cout << "4. Display Balance" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                a.deposit();
                break;

            case 2:
                a.withdraw();
                break;

            case 3:
                t.transferFunds();
                break;

            case 4:
                a.displayBalance();
                break;

            case 5:
                cout << "Exiting Program..." << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}