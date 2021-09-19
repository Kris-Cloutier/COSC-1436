/* Property Tax
By Kris Cloutier
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Define Variables
    double propertyValue, assesmentValue, tax;

    // Get user info
    cout << "What is your property value?" << endl;
    cin >> propertyValue;

    // Calculate
    assesmentValue = propertyValue / 1.6;
    tax = (assesmentValue / 100) * 0.75;

    // Display results
    cout << "Your property tax is $" << setprecision(2) << fixed << tax << endl;

    return 0;
}