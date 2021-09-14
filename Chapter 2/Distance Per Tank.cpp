/* Distance per tank
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    double gallons = 20,
    mpgInTown = 23.5,
    mpgOnHighway = 28.9,
    distance;

    distance = gallons * mpgInTown;
    cout << "You can travel about " << distance << " miles in town" << endl;

    distance = gallons * mpgOnHighway;
    cout << "You can travel about " << distance << " miles on the highway" << endl;

    return 0;
}