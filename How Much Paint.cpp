/* How Much Paint
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    double coveragePerGallon = 340,
    gallonsNeeded,
    coverage;

    coverage = 100 * 6;
    gallonsNeeded = coverage / coveragePerGallon;

    cout << "You will need " << gallonsNeeded * 2 << " gallons to paint your fence twice." << endl;

    return 0;

}