/* Celsius to Fahrenheit
By Kris Cloutier
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // Define Variables
    double F, C;

    // Get User Info
    cout << "Enter Celsius Degrees:" << endl;
    cin >> C;

    // Calculate
    F = 1.8 * C + 32;

    // Display Results
    cout << F << endl;

    return 0;
}