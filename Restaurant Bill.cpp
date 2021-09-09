/* Restaurant Bill
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    double meal = 88.67, // Price for the meal
            tax = 0.0675, // Tax percentage
            taxAmount, // Total Tax amount
            tip = 0.2, // Tip percentage
            tipAmount, //Total tip amount
            total; // Total bill price

    taxAmount = meal * tax;
    tipAmount = meal * tip;
    total = meal + taxAmount + tipAmount;

    cout << "Total Bill" << endl;
    cout << "Meal Charge: $" << meal << endl;
    cout << "Tax Charge: $" << taxAmount << endl;
    cout << "Tip Charge: $" << tipAmount << endl;
    cout << "Total Bill: $" << total << endl;

    return 0;
}