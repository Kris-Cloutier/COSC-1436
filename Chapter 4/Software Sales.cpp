/* Software Sales
By Kris Cloutier
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Define Constants
    const int PRICE = 99;

    // Define Variables
    double quantity, sale;

    // Get user info
    cout << "Enter quantity:";
    cin >> quantity;

    // Calculate & Display
    if ( quantity > 0 && quantity < 10) {
        sale = quantity * PRICE;
        cout << "Total Cost: $" << setprecision(2) << fixed << sale;
    } else if ( quantity >= 10 && quantity <= 19) {
        sale = (quantity * PRICE) * 1.2;
        cout << "Total Cost: $" << setprecision(2) << fixed << sale;
    } else if ( quantity >= 20 && quantity <= 49) {
        sale = (quantity * PRICE) * 1.3;
        cout << "Total Cost: $" << setprecision(2) << fixed << sale;
    } else if ( quantity >= 50 && quantity <= 99) {
        sale = (quantity * PRICE) * 1.4;
        cout << "Total Cost: $" << setprecision(2) << fixed << sale;
    } else if ( quantity >= 100) {
        sale = (quantity * PRICE) * 1.5;
        cout << "Total Cost: $" << setprecision(2) << fixed << sale;
    } else {
        cout << "Please enter a value greater than 0.";
    }

    return 0;
}