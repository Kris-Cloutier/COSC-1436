/* MPG
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    double gas = 15, // Total gallons
            miles = 375, // Max miles
            mpg; // Miles per gallon

    mpg = miles / gas;

    cout << "You get " << mpg  << " miles per gallon." << endl;

    return 0;
}