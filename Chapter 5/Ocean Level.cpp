/*Ocean Level
By Kris Cloutier
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Define Constants
    const double CURRENT_RISE = 1.5; // Current rise of sea level in mm
    
    // Define Variables
    double year = 0,
           rise = 0;

    // Loop
    for (int count = 0; count < 25; count++) {
        year++;
        rise += CURRENT_RISE;

        // Display Results
        cout << "Year " << year << " | " << "Rise: " << rise << endl <<
        "--------------------" << endl; 
    }

    // Display Results 

    return 0;
}