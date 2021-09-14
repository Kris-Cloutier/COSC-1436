/* Miles Per Gallon
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    // Declare Variables
    double gallons, milesFullTank, mpg;

    // Ask User for info
    cout << "Enter total gallons: " << endl;
    cin >> gallons;
    cout << "Enter total miles you can drive on a full tank: " << endl;
    cin >> milesFullTank;

    // Calculate MPG
    mpg = milesFullTank / gallons;

    // Display MPG to user
    cout << endl << endl <<
    "You get " << mpg << " miles per gallon." << endl;

    return 0;

}