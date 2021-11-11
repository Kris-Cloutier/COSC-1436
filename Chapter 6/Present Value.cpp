/* Present Value by Kris Cloutier*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Prototype
double presentValue(double, double, double);

int main() {
    // Variables
    double future, interest, years;

    // Get user input
    cout << "Enter the future value you wish to have: " << endl;
    cin >> future;

    cout << "Enter the annual interest rate with out the percent sign (e.x. 4% = 4): " << endl;
    cin >> interest;
    interest /= 100;

    cout << "Enter the total of years you want to save: " << endl;
    cin >> years;

    // Call function
    cout << "You will need to have a present value of $" << setprecision(2) << fixed <<
    presentValue(future, interest, years) << " to have a total of $" << setprecision(2) << fixed <<
    future << " saved.";

    return 0;
}

double presentValue(double F, double r, double n) {
    double P;

    P = F / pow((1 + r), n);

    return P;
}