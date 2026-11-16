// M5LAB2
// CSC 134
// Jeffrey Harrison
// 15 November 2026

#include <iostream>
using namespace std;

// Declare (Write the prototypes for)
// the getLength,
// getWidth, getArea, and displayData
// functions here.

#include <iostream>
using namespace std;

// Prototypes

double getLength();
double getWidth();
double getArea(double length, double width);

void displayData(double area, double length, double width);


int main()
{
	// This program calculates the area of a rectangle.
	// TODO: fix any syntax errors
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          

   // Get the rectangle's length.
   length = getLength();

   // Get the rectangle's width.
   width = getWidth();

   // Get the rectangle's area.
   area = getArea(length, width);

   // Display the rectangle's data.
   displayData(area, length, width);
          
   return 0;
}

//***************************************************
// TODO: write the getLength, getWidth, getArea,    *
// and displayData functions below.                 *
//***************************************************

double getLength() {
    double length;
    cout << "What is the length of the rectangle?" << endl;
    cout << "Rectangle length: ";
    cin >> length;
    return length;
}

double getWidth() {
    double width;
    cout << "What is the width of the rectabgle?" << endl;
    cout << "Rectangle width: ";
    cin >> width;
    return width;
}

double getArea(double length, double width) {
    double area = length * width;
    return area;
}

void displayData(double area, double length, double width) {
    cout << "The inputs and answers are as follows:" << endl;
    cout << "--------------------" << endl;
    cout << "Length: " << length << endl;
    cout << "Width: " << width << endl;
    cout << "Area: " << area << endl;
}