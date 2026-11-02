/* CSC 134
M4HW1 - Gold
Jeffrey Harrison
1 November 2026*/

#include <iostream>
using namespace std;

int main() {

const int   Min_Number = 1,
            Max_Number = 12;
int num = Min_Number,
    Input_Num;


do
{
    cout << "Enter a number between 1 to 12, use number keys only" << endl;
    cout << "Your input: " ;
    cin >> Input_Num ;

    if (Input_Num >= 1 and Input_Num <= 12){
        while (num <= Max_Number){
            cout << Input_Num << " times " << num << " equals " << (Input_Num * num) << "." << endl;
            num++;
        }
    }   
    else{
    cout << "Please Try again." << endl;
    }
} while (num <= Max_Number);

return 0;
}