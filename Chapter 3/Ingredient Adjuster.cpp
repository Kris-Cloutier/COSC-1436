/* Ingredient Adjuster
By Kris Cloutier
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Define Variables
    float cookies, batch, sugar = 1.5, butter = 1, flour = 2.75;

    // Ask user how many cookies are to be made
    cout << "How many cookies do you need?" << endl;
    cin >> cookies;

    // Calculate cookies
    batch = cookies / 48;
    sugar *= batch;
    butter *= batch;
    flour *= batch;

    // Display required ingredients needed 
    cout << "You will need:" << endl <<
    setprecision(3) << sugar << " cups of sugar" << endl <<
    setprecision(3) << butter << " cups of butter" << endl <<
    setprecision(3) << flour << " cups of flour" << endl <<
    "To make " << cookies << " cookies." << endl;

    return 0;
}