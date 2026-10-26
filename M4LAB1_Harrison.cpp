/* CSC 134
M4LAB1
Jeffrey Harrison
25 October 2026*/

// Print a 5 by 5 block of asterisks
#include <iostream>
using namespace std;

int main() {
    // Declare variables
    int width = 5,
        height = 5;

// Nest a row inside of each column
for (int j=0; j < height; j++) {
     for (int i=0; i < width; i++) {
    cout << "*" << " ";
}
cout << endl; // ending the row
}
cout << endl; // ending the column

return 0;
}