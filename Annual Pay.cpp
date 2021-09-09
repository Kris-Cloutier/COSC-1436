/* Annual Pay
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {
    int payAmount = 2200,
        payPeriods = 26,
        annualPay;

    annualPay = payAmount * payPeriods;

    cout << "Your total annual pay is $" << annualPay << endl;

    return 0;
}