// CSC 134
// M3HW
// Jeffrey Harrison
// 18 October 2026

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Function prototypes (declarations)
// Like a table of contents or glossary
// Just the description, no code
// This is a "method signature" or a "function declaration"
void question1();
void question2();
void question3();
void question4();


// main
int main() {
    cout << "Which homework question would you like to test?" << endl;
    cout << "1. Question 1" << endl;
    cout << "2. Question 2" << endl;
    cout << "3. Question 3" << endl;
    cout << "4. Question 4" << endl;
    cout << "0. Exit" << endl;

    int choice;
    cin >> choice;
    if (1==choice) {
        question1();
    }
    else if (2==choice) {
        question2();
    }
    else if (3==choice) {
        question3();
    }
    else if (4==choice) {
        question4();
    }
    else if (0==choice) {
        cout << "Bye!" << endl;
        return 0;
    }
    else {
        cout << "Not a valid choice." << endl;
    }
    return 0; 
}

// Function definitions
// Like a dictionary -- name, and then all the code
void question1() {

    // Simple chat bot, ask 1 question and provide answers.
    string answerq1,
    yes,
    Yes,
    no,
    No;

    cout << "Hello! Has your day been good today? Please answer with a \"yes\" or \"no.\"" << endl;
    cout << "Your answer: ";
    cin >> answerq1;
    
    if (answerq1 == "yes") {
        cout << "That's great! I hope the rest of the day is this good!" << endl;
    }
    else if (answerq1 == "Yes") {
        cout << "That's great! I hope the rest of the day is this good!" << endl;
    }
    else if (answerq1 == "no") {
        cout << "That's sad, I hope your day gets better!" << endl;
    }
    else if (answerq1 == "No") {
        cout << "That's sad, I hope your day gets better!" << endl;
    }
    else {
        cout << "Sorry, I didn't understand you." << endl;
    }    

}

void question2() {

    // Declare our variables
string  item = "🍣 Sushi";
int answerq2;
double item_price = 5.99;
double tax_percent = 0.08;  // this standing for 8% or 8 of 100
double tax_amount;          // tax in dollars
double total;               // price + tax
double total_with_tip;      // Price + tax + tip
double dine_in_tip; //add 15% if dining in

// Greet user and take the order
cout << "Welcome to our CSC 134 Sushi Restaurant!" << endl;
cout << "You ordered one " << item << "." << endl;

//Ask if dining in or out
cout << "Will you be dining in today? Type 1 for yes and 2 for no." << endl;
cout << "1 or 2: ";
cin >> answerq2;


// Calculate the meal price
// Calculate the sales tax and the total price
tax_amount = item_price * tax_percent; // take 8% of the item
total = item_price + tax_amount;
dine_in_tip = item_price * 0.15;
total_with_tip = item_price + tax_amount + dine_in_tip;



// if statement for answer
if (answerq2 == 1) {
    cout << "Please include a 15 percent tip." << endl;

    // Print the receipt
cout << setprecision(2) << fixed;
cout << "Thank you for shopping with us!" << endl;
cout << "----------------------------" << endl;
cout << item << "\t$" << item_price << endl;
cout << "Tax" << "\t\t$" << tax_amount << endl;
cout << "Tip" << "\t\t$" << dine_in_tip << endl;
cout << "----------------------------" << endl;

cout << "Total" << "\t\t$" << total_with_tip << endl;
cout << endl;

}
else if (answerq2 == 2) {
    cout << "Thank you, we'll have your meal out shortly" << endl;

// Print the receipt
cout << setprecision(2) << fixed;
cout << "Thank you for shopping with us!" << endl;
cout << "----------------------------" << endl;
cout << item << "\t$" << item_price << endl;
cout << "Tax" << "\t\t$" << tax_amount << endl;
cout << "----------------------------" << endl;

cout << "Total" << "\t\t$" << total << endl;
cout << endl;



}
else {
    cout << "We will assume you are take out, please alert the staff if you would like to be seated" << endl;

// Print the receipt
cout << setprecision(2) << fixed;
cout << "Thank you for shopping with us!" << endl;
cout << "----------------------------" << endl;
cout << item << "\t$" << item_price << endl;
cout << "Tax" << "\t\t$" << tax_amount << endl;
cout << "----------------------------" << endl;

cout << "Total" << "\t\t$" << total << endl;
cout << endl;



}



}

void question3() {

}

void question4() {

}
