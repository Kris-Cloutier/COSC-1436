/* Mass and Weight
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    // Define Variables
    double weight, mass;

    // Get user info
    cout << "Enter the mass of the object:";
    cin >> mass;

    // Calculate
    weight = mass * 9.8;

    // Display
    if ( weight > 1000 ) {
        cout << "Object weight is " << weight << " newtons.\n";
        cout << "Object is to heavy";
    } else if ( weight < 10 ) {
        cout << "Object weight is " << weight << " newtons.\n";
        cout << "Object is to light.";
    } else {
        cout << "Object weight is " << weight << " newtons.";
    }

    return 0;
}