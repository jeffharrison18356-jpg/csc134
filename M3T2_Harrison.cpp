// CSC 134
// M3T2
// Jeffrey Harrison
// 11 Oct 2026

#include <iostream>
// includes pseudorandom numbers
#include <cmath>
// makes it truely random
#include <ctime>
using namespace std;

int main () {
cout << "Let's roll some dice!" << endl;
int seed = time(0);

srand(seed);

const int MAX = 6; // from 1 to 6
int roll1, roll2, total;
roll1 = (rand() % MAX) + 1; // divide by MAX and keep the remainder
cout << "Your roll was " << roll1 << endl;

roll2 = (rand() % MAX) + 1; // divide by MAX, keep remainder
cout << "Your roll was " << roll2 << endl;

total = roll1 + roll2;
cout << "Your total roll is " << total << endl;

// Let's play Craps!
// 7 and 11 win!
// 2 and 12 lose...
// Anything else comes later.
if (total == 7) {
    cout << "Lucky seven! You win!" << endl;
}
else if (total == 11) {
    cout << "Eleven, you win!" << endl;
}
else if (total == 2) {
    cout << "Snake eyes, you lose!" << endl;
}
else if (total == 12) {
    cout << "Boxcars, you lost!" << endl;
}
else {
    //any other number
    cout << "Your number is " << total << " but we'll do that later." << endl;

}
    return 0;
}