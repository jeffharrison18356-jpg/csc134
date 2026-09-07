// CSC 134
// M1HW1
// Jeffrey Harrison
// 6 Sep 2026

#include <iostream>
using namespace std;

int main() {
    // This program will state a movie name, release year, box office gross, and a paragraph about the movie
    // Movie name
    string name = "I, Robot";
    // Year of release
    int year = 2004;
    // Box office gross
    double BOgross = 353.1;

    // Print information about the movie
    cout << "The Movie \"" << name;
    cout << "\" came out in " << year;
    cout << ", and had a worldwide gross of around " << BOgross;
    cout << " million dollars." << endl;

    // Paragraph describing movie, will include a quote.
    cout << "The movie \"" << name;
    cout << "\" is about the investigator Del Spooner investigating the death of the famous roboticist Dr. Lawrence Robertson." << endl;
    cout << "Spooner joins with a reluctant Dr. Susan Calvin to investigate the mysterious robot Sonny,";
    cout << " who appears to have murdered Dr. Robinson." << endl;
    cout << "The detective Spooner, after denying the humanity of the robot Sonny that he is questioning, asks" << endl;
    cout << " \"Can a robot write a symphony, can a robot turn a canvas into a beautiful masterpiece?\"" << endl;
    cout << "This scene has become more relevant recently, and has become more popular as well," << endl;
    cout << " likely due to LLMs and the ability of many of them to create music and visual artworks." << endl;
    return 0;
}