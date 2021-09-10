/* Energy Drink Consumption
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    double surveyed = 16500,
    oneDrink,
    citrusDrink;

    oneDrink = surveyed * 0.15;
    citrusDrink = surveyed * 0.58;

    cout << "Approximate number of customers who purchase one or more energy drinks " << oneDrink << endl <<
    "The approximate number of customers who prefer citrus flavored drinks " << citrusDrink << endl;

    return 0;
}