/* How Many Widgets
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    // Define Constant
    const double widgetWeight = 12.5;

    // Define Variables
    double palletWeight, totalWidgets;

    // Get User Info
    cout << "Enter pallet weight: " << endl;
    cin >> palletWeight;

    // Calculate
    totalWidgets = palletWeight / widgetWeight;

    // Display Output
    cout << "There are a total of " << totalWidgets << " widgets on this pallet." << endl;

    return 0;
}