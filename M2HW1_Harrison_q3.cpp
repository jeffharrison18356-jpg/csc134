/* 
CSC 134
M2HW1 Q2
Jeffrey Harrison
4 October 26
*/
// This program will ensure that every visitor to a pizza party gets exactly 3 pieces of pizza.


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables
    int pizzas;
    int slices_per_pizza;
    int total_slices;
    int slices_eaten;
    int leftover_slices;
    int visitors;

    // Gathering info about amounts of pizza
    cout << "Welcome to the pizza party! I will ensure that everyone gets exactly 3 slices of Pizza." << endl;
    cout << "How many pizzas did you order?" << endl;
    cout << "Pizzas: ";
    cin >> pizzas;
    cout << "How many slices per pizza?" << endl;
    cout << "Slices per pizza: ";
    cin >> slices_per_pizza;
    cout << "How many people came to the party?" << endl;
    cout << "Visitors: ";
    cin >> visitors;

    // Mathematics behind pizza distribution
    total_slices = pizzas * slices_per_pizza;
    slices_eaten = visitors * 3;
    leftover_slices = total_slices - slices_eaten;

    //Print out results
    cout << "There were " << total_slices << " of pizza in total, and " << slices_eaten << " were eaten";
    cout << " with " << leftover_slices << " leftover slices remaining." << endl;






return 0;
}