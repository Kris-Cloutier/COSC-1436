/* Automobile Cost
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    // Define Variables
    double loan, insurance, gas, oil, tires, maintenance, totalMontly;

    // Get user info
    cout << "Enter monthly loan amount:" << endl;
    cin >> loan;

    cout << "Enter monthly insurance cost:" << endl;
    cin >> insurance;

    cout << "Enter monthly gas cost:" << endl;
    cin >> gas;

    cout << "Enter monthly tire cost:" << endl;
    cin >> tires;

    cout << "Enter monthly oil cost:" << endl;
    cin >> oil;

    cout << "Enter monthly maintenance cost:" << endl;
    cin >> maintenance;
 
    // Calculate
    totalMontly = loan + insurance + gas + tires + oil + maintenance;

    // Display results
    cout << "Total monthly cost for your automobile is $" << totalMontly << endl;

    return 0;
}