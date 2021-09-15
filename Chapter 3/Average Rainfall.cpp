/* Average Rainfall
By Kris Cloutier
*/

#include <iostream> 
#include <iomanip>
#include <string>

using namespace std;

int main() {

    // Define Variables
    string month1, month2, month3;
    int rain1, rain2, rain3;
    double average;

    // Get Month and rainfall total from user
    cout << "Enter Month 1: " << endl;
    getline(cin, month1);
    cout << "Enter rainfall total for " << month1 << ": " << endl;
    cin >> rain1;
    cin.ignore();

    cout << "Enter Month 2: " << endl;
    getline(cin, month2);
    cout << "Enter rainfall total for " << month2 << ": " << endl;
    cin >> rain2;
    cin.ignore();

    cout << "Enter Month 3: " << endl;
    getline(cin, month3);
    cout << "Enter rainfall total for " << month3 << ": " << endl;
    cin >> rain3;
    cin.ignore();
    
    // Calculate average rainfall
    average = (rain1+ rain2 + rain3) / 3.0;

    // Display results to use
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << setprecision(2) << average << " inches." << endl;

    return 0;
}