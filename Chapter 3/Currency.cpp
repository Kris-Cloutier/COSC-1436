/* Currency 
By Kris Cloutier
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Define Constants
    const double YEN_PER_DOLLAR = 109.9, EUROS_PER_DOLLAR = 0.85;

    // Define Variables
    double dollars, yen, euros;

    // Get user info
    cout << "Enter dollars:" << endl;
    cin >> dollars;

    // Calculate
    yen = dollars * YEN_PER_DOLLAR; 
    euros = dollars * EUROS_PER_DOLLAR;

    // Display Results
    cout << "Euros: " << setprecision(2) << fixed << euros << endl <<
    "Yen: " << setprecision(2) << fixed << yen << endl;

    return 0;
}