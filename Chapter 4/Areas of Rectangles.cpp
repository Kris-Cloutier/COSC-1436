/* Areas of Rectangles
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    // Define Variables
    int rect1, rect2, L1, L2, W1, W2;

    // Get user info
    cout << "Enter length and width of rectangle 1, be sure to separate the length and width with a space.";
    cin >> L1 >> W1;

    cout << "Enter length and width of rectangle 2, be sure to separate the length and width with a space.";
    cin >> L2 >> W2;

    // Calculate
    rect1 = L1 * W2;
    rect2 = L2 * W2;

    // Display
    if (rect1 > rect2) {
        cout << "Rectangle 1 is bigger.";
    } else {
        cout << "Rectangle 2 is bigger";
    }

    return 0;
}