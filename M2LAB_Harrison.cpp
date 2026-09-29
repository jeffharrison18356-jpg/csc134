/* 
CSC 134
M2LAB
Jeffrey Harrison
28 September 26
*/
// This program is used by General Crates, Inc. to calculate
// the volume, cost, customer charge, and profit of a crate
// of any size. It calculates this data from user input, which
// consists of the dimensions of the crate.
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // Constants for cost and amount charged.
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;

    // Variables
    double  length, // Crate length
            width, // Crate width
            height, // Crate height
            volume, // Crate volume
            cost, // Cost to build crate
            charge, // Customer charge for crate
            profit; // Profit made from crate

    // Desired output formatting for numbers
    cout << setprecision(2) << fixed << showpoint;

    // Prompt the user for the crate's length, width, and height
    cout << "Enter the dimensions of the crate (in feet) :\n";
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;
    





}