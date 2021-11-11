/* Kinetic Energy by Kris Cloutier */

#include <iostream>
#include <cmath>

using namespace std;

// Prototype
double kineticEnergy(double, double);

int main(){

    // Variables 
    double mass, velocity;

    // Get user input
    cout << "Enter the object's mass (in kilograms): " << endl;
    cin >> mass;

    cout << "Enter the object's velocity (in meters per second): " << endl;
    cin >> velocity;

    // Call function
    cout << "The kinetic energy of the object is: " << kineticEnergy(mass, velocity) << endl;

    return 0;
}

double kineticEnergy(double m, double v) {
    double KE;

    KE = 0.5 * m * pow(v, 2.0);

    return KE;
}