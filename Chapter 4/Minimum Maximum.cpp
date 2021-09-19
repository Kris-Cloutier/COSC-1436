/* Minimum and Maximum
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    // Define Variables
    int num1, num2;

    // Get user info
    cout << "Enter two numbers seperate by a space:";
    cin >> num1 >> num2;

    // Display Results
    if (num1 > num2) {
        cout << num1 << " is larger.";
    } else {
        cout << num2 << " is larger.";
    }

    return 0;
}