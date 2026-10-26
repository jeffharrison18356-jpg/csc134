/* CSC 134
M4T1
Jeffrey Harrison
25 October 2026*/

// Demonstrate a simple while loop
#include <iostream>
using namespace std;

int main() {
// Part 1: While loop from 5-3
// Use a simple loop while counting
    int number = 5;
    int i = 0;

    while (i < number) {
        cout << "Hello" << endl;
        i = i+1;
    }
    cout << "That's all!" << endl;

// Part 2: Program 5-6, using while loop to print squares
    const int   MIN_NUMBER = 1,  // Starting number to square
                MAX_NUMBER = 10; // Max number to square
    int num = MIN_NUMBER;        // Counter

    cout << "Number   Number Squared\n";
    cout << "_________________________\n";

    while (num<= MAX_NUMBER){

        cout << num << "\t\t" << (num * num) << endl;
        num++; // Increment the counter, also written as num = num + 1 from 5.3
    }



return 0;

}


