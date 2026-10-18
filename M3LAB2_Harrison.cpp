/* CSC 134
M3LAB2
Jeffrey Harrison
18 October 2026 */

// Create a C++ program that allows the user to imput a numerical grade, and outputs a letter grade

#include <iostream>
using namespace std;

int main() {

double Final_grade;

// Ask for the test score
    cout << "Hello, please input one numerical grade." << endl;
    cout << "Your numerical grade is: " ;
    cin >> Final_grade;

// Use if statements to determine and print the score
if (Final_grade <= 100 && Final_grade >= 90) {
    cout << "Your final grade is an A! Congrats!" << endl;
}
else if (Final_grade <= 89 && Final_grade >=80) {
    cout << "Your final grade is a B." << endl;
}
else if (Final_grade <= 79 && Final_grade >= 70) {
    cout << "Your final grade is a C." << endl;
}
else if (Final_grade <= 69 && Final_grade >= 60) {
    cout << "Your final grade is a D." << endl;
}
else if (Final_grade <= 59 && Final_grade >= 0) {
    cout << "Your final grade is an F." << endl;
}
else {
    cout << "Using number keys, please input a number between 0 and 100" << endl;
}

return 0;
}
