/* Interest Earned
By Kris Cloutier
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    // Define Variables
    double amount, principal, rate, time, interest;

    // Get user info
    cout << "Enter Principal:" << endl;
    cin >> principal;

    cout << "Enter Rate" << endl;
    cin >> rate;

    cout << "Enter how many times interest is compounded:" << endl;
    cin >> time;

    // Calculate
    rate /= 100;
    amount = principal * pow((1 + rate / time), time);
    interest = amount - principal;

    // Display results
    cout << "Interest Rate:" << setw(15) << rate * 100 << "%" << endl <<
    "Times Compounded:" << setw(12) << time << endl <<
    "Principal:" << setw(10) << "$" << setw(9) << setprecision(2) << fixed << principal << endl <<
    "Interest:" << setw(11) << "$" << setw(9) << setprecision(2) << fixed << interest << endl <<
    "Amount in Savings:" << setw(2) << "$" << setw(9) << setprecision(2) << fixed << amount << endl;

    return 0;
}