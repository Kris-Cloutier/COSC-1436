/* Calories Burned
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    // Define Constant
    const double CALORIES_PER_MIN = 3.6;

    // Define Variables
    double caloriesBurned;

    // Loop, Calculate and Display results
    for ( int minutes = 0; minutes < 30;) {
        minutes += 5;
        caloriesBurned = minutes * CALORIES_PER_MIN;

        cout << "Calories burned at " << minutes << " minutes is " << caloriesBurned << endl;
    }

    return 0;
}