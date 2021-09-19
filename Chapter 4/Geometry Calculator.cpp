/* Geometry Calculator
By Kris Cloutier
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // Define Variables
    double area, length, width, base, height, radius;
    int input;

    // Get User Info
    cout << "Geometry Calculator\n" 
    << "1. Calculate the Area of a Circle\n"
    << "2. Calculate the Area of a Rectangle\n"
    << "3. Calculate the Area of a Triangle\n"
    << "4. Quit"
    << "Enter your choice (1-4):";
    cin >> input;

    // Switch
    switch (input) {
        case 1 : 
            cout << "Enter the radius of the circle: \n";
            cin >> radius;

            if (radius > 0) {
                area = M_PI * pow(radius, 2.0);

                cout << "The area is " << area;
            } else {
                cout << "Invalid number.";
            }
            break;
        case 2 :
            cout << "Enter the length and width of the rectangle:\n";
            cin >> length >> width;

            if ( length > 0 && width > 0 ) {
                area = length * width;

                cout << "The area is " << area;
            } else {
                cout << "Invalid number.";
            }
            break;
        case 3 :
            cout << "Enter the base and height of the triangle:\n";
            cin >> base >> height;

            if ( base > 0 && height > 0) {
                area = base * height * .5;

                cout << "The area is " << area;
            } else {
                cout << "Invalid number.";
            }
            break;
        case 4 : 
            cout << "Program quitting...";
            break;
        default : cout << "You did not enter a selection between 1 and 4.\n";
    }

    return 0;
}