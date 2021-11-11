/* Future Value by Kris Cloutier */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// Prototype
double futureValue(double, double, double);

int main() {
    // Variables
    double present, monthlyRate, monthsTotal;

    // Get user input
    cout << "Enter the present value: " << endl;
    cin >> present;

    cout << "Enter the monthly interest rate (Ex. 4% = 4): " << endl;
    cin >> monthlyRate;
    monthlyRate /= 100;

    cout << "Enter the total months you will save: " << endl;
    cin >> monthsTotal;

    // Call function
    cout << "You will have a total of $" << setprecision(2) << fixed << 
    futureValue(present, monthlyRate, monthsTotal) << " saved." << endl;

    return 0;
}

double futureValue(double P, double i, double t) {
    double F;

    F = P * pow((1 + i), t);

    return F;
}