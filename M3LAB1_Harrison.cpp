// CSC 134
// M3LAB1
// Jeffrey Harrison
// 11 October 2026

// set up a simple question with two possible answers

#include <iostream>
using namespace std;

int main() {

// name of the variable
int choice;

// ask the question
cout << "What a beautiful tropical paradise this is! Welcome, would you like fruit 1, mango, or fruit 2, coconut?" << endl;
cout << "Type 1 for mango, or 2 for coconut." << endl;
cin >> choice;

// use an if statement depending on the answer
if (choice == 1) {
    cout << "Great choice, I LOVE mango too!" << endl;
}
else if (choice == 2) {
    cout << "Great choice, there's so many here! Here's your coconut." << endl;
}
else {
    // meaning any other input
    cout << "Sorry, make sure to input either 1 or 2. Please try again." << endl;
}

// finishing up
cout << "Thank you for coming, please enjoy your stay!" << endl;

return 0;
}