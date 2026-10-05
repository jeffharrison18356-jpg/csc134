/* 
CSC 134
M2HW1 Q2
Jeffrey Harrison
4 October 26
*/
// This updated program by General Crates, Inc. is used to calculate
// the volume, cost, customer charge, and profit of a crate
// of any size. It calculates this data from user input, which
// consists of the dimensions of the crate.
// The cost per cubic foot and customer charge will be changed.
#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{
    // Constants for cost and amount charged.
    const double COST_PER_CUBIC_FOOT = 0.30;
    const double CHARGE_PER_CUBIC_FOOT = 0.52;

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

        // Calculate the crate's volume, the cost to produce it,
        // the charge to the customer, and the profit.
        volume = length * width * height;
        cost = volume * COST_PER_CUBIC_FOOT;
        charge = volume * CHARGE_PER_CUBIC_FOOT;
        profit = charge - cost;

        // Display the calculated data
        cout << "The volume of the crate is ";
        cout << volume << " cubic feet. \n";
        cout << "Cost to build: $" << cost << endl;
        cout << "Charge to customer: $" << charge << endl;
        cout << "Profit: $" << profit << endl;
        return 0;

}