/* Sales Tax
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    double subTotal = 95.00, // total before tax
            salesTax = 0.04, // 4% sales tax
            countyTax = 0.02, // 2% sales tax for county
            total; // Total price with tax

    total = (subTotal * salesTax) + (subTotal * countyTax) + subTotal;

    cout << "Your total price with tax is $" << total << endl;
}