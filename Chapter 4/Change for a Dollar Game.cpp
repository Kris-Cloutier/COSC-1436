/* Change for a Dollar Game
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    // Define Constants
    const double PENNY = 0.01, NICKLE = 0.05, DIME = 0.1, QUARTER = 0.25;

    // Define Variables
    double pennies, nickles, dimes, quarters, total;

    // Get user info
    cout << "Enter total Pennies:\n";
    cin >> pennies;

    cout << "Enter total Nickels:\n";
    cin >> nickles;
    
    cout << "Enter total Dimes:\n";
    cin >> dimes;

    cout << "Enter total Quarters:\n";
    cin >> quarters;

    // Calculate
    pennies *= PENNY;
    nickles *= NICKLE;
    dimes *= DIME;
    quarters *= QUARTER;

    total = pennies + nickles + dimes + quarters;

    // Display
    if ( total == 1.0 ) {
        cout << "Congrats! You made a dollar!";
    } else if ( total > 1.00 ) {
        cout << "Oh no! You have more than a dollar.";
    } else if ( total < 1.00 && total > 0) {
        cout << "Oh no! You have less than a dollar.";
    } else {
        cout << "You have no money.";
    }

    return 0;
}