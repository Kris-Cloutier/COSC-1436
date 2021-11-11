/* Markup by Kris Cloutier */

#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototype
double calculateRetail(double, double);

int main (){
    // Define the cost and markup percent variables
    double cost, markupPercent, markupTotal;

    // Get user input
    cout << "Enter product price: " << endl;
    cin >> cost;

    cout << "Enter markup percentage: " << endl;
    cin >> markupPercent;

    // Call the calculateRetail() and validate input
    if ( cost > 0 && markupPercent > 0) {
        markupTotal = calculateRetail(cost, markupPercent);

        cout << "New retail price: $" << setprecision(2) << fixed << markupTotal << endl;
    } else {
        cout << "Please enter a value above 0.";
    }

    // Return
    return 0;
}

double calculateRetail(double arg1, double arg2) {
    double calMarkup;

    arg2 /= 100;
    calMarkup = (arg1 * arg2) + arg1;
    return calMarkup;
}