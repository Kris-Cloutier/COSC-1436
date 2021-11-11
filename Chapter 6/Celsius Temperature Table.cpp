/* Celsius Temperature Table by Kris Cloutier */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Prototypes
double celcius(double);

int main() {

    // Function call
    for ( int fahrenheit = 0; fahrenheit <= 20; fahrenheit++){
        cout << fahrenheit << " degrees fahrenheit is equal to " << setprecision(1) << 
        fixed << celcius(fahrenheit) << " degrees celcius." << endl;

    }

    return 0;

}

double celcius(double F) {
    double C;

    C = ( 5.0 / 9.0 ) * (F - 32);

    return C;
}