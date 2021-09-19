/* Magic Dates
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    // Define Variables
    int month, day, year, multiple;

    // Get user info
    cout << "Enter date as following: MM DD YY";
    cin >> month >> day >> year;

    // Calculate and Display
    multiple = month * day;

    if (multiple == year) {
        cout << "This is a magic date!";
    } else {
        cout << "This is not a magic date.";
    }

    return 0;
}