/* Membership Fee Increase
By Kris Cloutier
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Define Variables
    double membershipFee = 2500.0,
           increase = 1.04;

    // Loop, Calculate and Display results
    for ( int year = 1; year < 6; year++) {
        membershipFee *= increase;
        

        cout << "New membership fee for year " << year << " is $" << membershipFee << endl;
    }

    return 0;
}