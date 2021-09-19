/* Monthly Payments
By Kris Cloutier
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    // Define Variables
    double Payment, Rate, N, L, interest, amount;

    // Get user info
    cout << "Enter loan amount:" << endl;
    cin >> L;

    cout << "Enter annual interest rate:" << endl;
    cin >> Rate;

    cout << "Enter number of payments:" << endl;
    cin >> N;

    // Calculate
    Rate /= 12; 
    Rate /= 100;
    Payment = Rate * pow((1 + Rate), N) / ( pow((1 + Rate), N) - 1) * L;
    amount = Payment * N;
    interest = amount - Payment;

    // Display
    cout << "Loan Amount:" << setw(13) << "$" << setw(9) << setprecision(2) << fixed << L << endl;
    cout << "Monthly Interest Rate:" << setw(11) << Rate * 100 << "%" << endl <<
    "Number of Payments:" << setw(15) << N << endl <<
    "Monthly Payment:" << setw(9) << "$" << setw(9) << setprecision(2) << fixed << Payment << endl <<
    "Amount Paid Back:" << setw(8) << "$" << setw(9) << setprecision(2) << fixed << amount << endl <<
    "Interest Paid:" << setw(11) << "$" << setw(9) << setprecision(2) << fixed << interest << endl;


    return 0;
}