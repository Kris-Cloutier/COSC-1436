/* Total Purchase
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    double item1 = 15.95,
            item2 = 24.95,
            item3 = 6.95,
            item4 = 12.95,
            item5 = 3.95,
            subTotal, // Before Tax
            tax, // Tax 
            total; // Subtotal plus tax

    subTotal = item1 + item2 + item3 + item4 + item5;
    tax = subTotal * 0.07; 
    total = subTotal + tax;

    cout << "Thanks For Shopping With Us!" << endl;
    cout << "Item 1: $" << item1 << endl;
    cout << "Item 2: $" << item2 << endl;
    cout << "Item 3: $" << item3 << endl;
    cout << "Item 4: $" << item4 << endl;
    cout << "Item 5: $" << item5 << endl << endl;
    cout << "Sub Total: $" << subTotal << endl;
    cout << "Tax @ 7%: $" << tax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}