// CSC 134
// M5T2 - More Practice with Functions
// Jeffrey Harrison
// Partner: GitHub Copilot chat
// [date]

#include <iostream>
using namespace std;

// Function prototypes
int square(int num);
void printAnswerLine(int number, int squared);

int main() {
    // Print the numbers 1 to 10 and their squares.
    for (int i = 1; i <= 10; i++) {
        // TODO: call square(i) and store the result in a variable
        square(i);
        int mainAnswer = square(i);
        
        // TODO: call printAnswerLine() with i and that variable
        printAnswerLine(i,mainAnswer);
    }
    return 0;
}

// Return the square of num.
int square(int num) {
    // TODO: return num times num
    int new_num = num * num;
    return new_num;
}

// Print one line of the answer, for example: 3 squared is 9
void printAnswerLine(int number, int squared) {
    cout << number << " squared is " << squared << endl;
}