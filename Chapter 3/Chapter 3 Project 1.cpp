/* Chapter 3 Porject 1 
By Kris Cloutier
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

    string month1, month2, month3;
    double rain1, rain2, rain3, averageRain, rounded;

    cout << "Enter Month:" << endl;
    cin >> month1;
    cout << "Enter rainfall for " << month1  << ":"  << endl;
    cin >> rain1;
    cout << "Enter Month: "  << endl;
    cin >> month2;
    cout << "Enter rainfall for " << month2 << ":"  << endl;
    cin >> rain2;
    cout << "Enter Month: "  << endl;
    cin >> month3;
    cout << "Enter rainfall for " << month3 << ":"  << endl;
    cin >> rain3;

    averageRain = (rain1 + rain2 + rain3) / 3;
    rounded = round(averageRain * 100.0) / 100.0;

    cout << "The average rainfall for " << month1 << ", " << month2 << ", " << month3 << " is " << rounded << " inches." << endl;

    return 0;
}