/* Senior Citizen Property Tax
By Kris Cloutier
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Define Variables
    double propertyValue, assesmentValue, tax, taxRate, quarterly;

    // Get user info
    cout << "What is your property value?" << endl;
    cin >> propertyValue;

    cout << "What is your tax rate per $100?" << endl;
    cin >> taxRate;

    // Calculate
    assesmentValue = propertyValue / 1.6 - 5000;
    tax = (assesmentValue / 100) * taxRate;
    quarterly = tax / 4;

    // Display results
    cout << "Your property tax is $" << setprecision(2) << fixed << tax << endl <<
    "Your quarterly tax bill will be $" << setprecision(2) << fixed << quarterly << endl;

    return 0;
}