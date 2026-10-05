/* 
CSC 134
M2HW1 Q4
Jeffrey Harrison
4 October 26
*/
// This program will print a school chant three times, followed by a single school team chant.


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    // strings for the chant
    string  letsGo = "Let's go",
            school = "FTCC",
            team = "Trojans",
            cheerOne,
            cheerTwo;

//Describing each cheer
cheerOne = letsGo + " " + school;
cheerTwo = letsGo + " " + team;


cout << cheerOne << endl;
cout << cheerOne << endl;
cout << cheerOne << endl;
cout << cheerTwo << endl;




return 0;
}