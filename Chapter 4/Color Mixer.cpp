/* Color Mixer
By Kris Cloutier
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    // Define Variables
    string chc1, chc2, mix;

    // Get user info
    cout << "Enter first color choice (Red, Blue, and Yellow):";
    getline(cin, chc1);

    cout << "Enter second color choice (Red, Blue, and Yellow):";
    getline(cin, chc2);

    // Display 
    if ( (chc1 == "Red" || chc1 == "Blue") && (chc2 == "Red" || chc2 == "Blue") ) {
        cout << "Your mixed color is Purple.";
    } else if ( (chc1 == "Red" || chc1 == "Yellow") && (chc2 == "Red" || chc2 == "Yellow") ) {
        cout << "Your mixed color is Orange.";
    } else if ( (chc1 == "Yellow" || chc1 == "Blue") && (chc2 == "Yellow" || chc2 == "Blue") ) {
        cout << "Your mixed color is Green.";
    } else {
        cout << "Please choose one of the three primary colors to mix.";
    }

    return 0;
}