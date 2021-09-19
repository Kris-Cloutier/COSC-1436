/* How Many Calories
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    // Define Constant
    const double cookieCalorie = 10.0; 

    // Define Variable
    double cookieEaten, totalCalories;

    // Get user info
    cout << "How many cookies did you eat?" << endl;
    cin >> cookieEaten;

    // Calculate
    totalCalories = cookieEaten * cookieCalorie;

    // Display results
    cout << "You have a total calorie intake of " << totalCalories << " calories." << endl;

    return 0;            
}