/* Falling Distance by Kris Cloutier */

#include <iostream> 
#include <iomanip>
#include <cmath>

using namespace std;

// Prototype function
double fallingDistance(double);

int main() { 

    // Preform count loop and call function.
    for ( int time = 1; time <= 10; time++){
        cout << "In " << time << " second(s) the object has fallen " << fallingDistance(time) 
        << " meters." << endl;
    }

    return 0;

}

double fallingDistance(double t) {
    // Variables d = Distance in meters, g = 9.8, t = Time.
    double d, g = 9.8;

    d = 0.5 * g * pow(t, 2.0);

    return d;

}