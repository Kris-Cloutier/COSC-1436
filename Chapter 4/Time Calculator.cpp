/* Time Calculator
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    // Define Constants
    const int SEC_TO_MINUTE = 60;
    const int SEC_TO_HOUR = 3600;
    const int SEC_TO_DAY= 86400;

    // Define Variables
    double seconds, time;

    // Get user info
    cout << "Enter total seconds:";
    cin >> seconds;

    // Display
    if ( seconds > SEC_TO_MINUTE && seconds < SEC_TO_HOUR) {
        time = seconds / SEC_TO_MINUTE;

        cout << time << " mintues";
    } else if ( seconds > SEC_TO_HOUR && seconds < SEC_TO_DAY ) {
        time = seconds / SEC_TO_HOUR;

        cout << time << " hours";
    } else if ( seconds > SEC_TO_DAY ){
        time = seconds / SEC_TO_DAY;

        cout << time << " days";
    } else {
        cout << seconds << " seconds";
    }

    return 0;
}