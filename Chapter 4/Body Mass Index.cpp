/* Body Mass Index
By Kris Cloutier
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // Define Variables
    double bmi, weight, height;

    // Get user info
    cout << "Enter your weight (in pounds) and height (in inches):";
    cin >> weight >> height;

    // Calculate
    bmi = weight * (703 / pow(height, 2.0));

    // Display
    if (bmi >= 18.5 && bmi <= 25) {
        cout << "You have optimal weight.";
    } else if ( bmi < 18.5) {
        cout << "You are underweight.";
    } else if ( bmi > 25 ) {
        cout << "You are overweight";
    } else {
        cout << "Input is invalid, please restart.";
    }

    return 0;
}