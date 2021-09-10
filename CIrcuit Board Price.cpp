/* Circuit Board Price
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    double cost, // Cost to make circuit board
    profit, // Total profit
    sale = 14.95, // Price of sale
    percent = 0.35; // Percent of profit

    profit = sale * percent;
    cost = sale - profit;

    cout << "Sale Breakdown" << endl;
    cout << "Sale: $" << sale << endl;
    cout << "Profit percentage: " << percent * 100 << "%" << endl;
    cout << "Cost: $" << cost << endl;
    cout << "Profit: $" << profit << endl;

    return 0;
}