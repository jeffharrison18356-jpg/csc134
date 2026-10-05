/*
CSC 134
M2HW1 Q1
Jeffrey Harrison
4 October 26
*/
// In this program I will simulate basic banking account transactions,
// prompt the user for account credentials and transaction amounts,
// then compute and print the final summary.

#include <iomanip>
#include <iostream>
using namespace std;

int main() 
{

  

    // variables
    string account_name;
    double account_balance = 20000;
    double deposit_amount;
    double withdrawal_amount;
    double final_balance;

    //Formatting for numbers
    cout << setprecision(2) << fixed << showpoint;




    //Prompt the user for account info
    cout << "Welcome to your local bank! What is your full name?" << endl;
    getline(cin, account_name);
    cout << "Welcome " << account_name << "! Your balance is " << account_balance << ".";
    cout << " How much will you deposit today?" << endl;
    cout << "Deposit amount: ";
    cin >> deposit_amount;
    cout << "And how much will you withdraw today?" << endl;
    cout << "Withdrawal amount: ";
    cin >> withdrawal_amount;

    // calculations for final account balance
        final_balance = account_balance + deposit_amount - withdrawal_amount;

    // Print final balance
    cout << "You deposited $" << deposit_amount << "  and withdrew $" << withdrawal_amount << " today." << endl;
    cout << "Your account's final balance is $" << final_balance << ". Thank you for visiting your local bank!" << endl;


return 0;
}