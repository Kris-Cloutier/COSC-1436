/* Monthly Sales Tax
By Kris Cloutier
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    // Define Variables
    double tax, productSales, totalIncome, stateTax = 0.04, countyTax = 0.02;
    string month;

    // Get user info
    cout << "Enter Month:" << endl;
    getline(cin, month);
    cin.ignore(); 

    cout << "Enter total income:" << endl;
    cin >> totalIncome; 

    // Calculate
    productSales = totalIncome / 1.06;
    countyTax *= totalIncome;
    stateTax *= totalIncome;
    tax = stateTax + countyTax;

    // Display Results
    cout << "Month: " << month << endl <<
    "--------------------" << endl <<
    "Total Collected:" << setw(6) << "$" << setw(9) << setprecision(2) << fixed << totalIncome << endl <<
    "Sales:" << setw(16) << "$" << setw(9) << setprecision(2) << fixed << productSales << endl <<
    "County Sales Tax:" << setw(5) << "$" << setw(9) << setprecision(2) << fixed << countyTax << endl <<
    "Total Collected:" << setw(6) << "$" << setw(9) << setprecision(2) << fixed << stateTax << endl <<
    "Total Collected:" << setw(6) << "$" << setw(9) << setprecision(2) << fixed << tax << endl;

    return 0;
}