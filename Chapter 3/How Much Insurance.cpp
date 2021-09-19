/* How Much Insurance
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    // Define Constants
    const double insurancePercent = 0.8;

    // Define Variables
    double replacementCost, totalInsurance;

    // Get User Info
    cout << "Enter total replacement cost of the house:" << endl;
    cin >> replacementCost;

    // Calculate 
    totalInsurance = replacementCost * insurancePercent;

    // Display Results
    cout << "You will need atleast $" << totalInsurance << " to cover your house at 80%." << endl;

    return 0;
}