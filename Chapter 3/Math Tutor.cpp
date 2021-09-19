/* Math Tutor
By Kris Cloutier
*/

#include <iostream>
#include <random>
#include <iomanip>

using namespace std;

int main() {

    // Define Variables
    int number1, number2, sum;

    // Generate Random Number and Calculate
    random_device myEngine;

    uniform_int_distribution<int> randomInt(1, 999);

    number1 = randomInt(myEngine);
    number2 = randomInt(myEngine);
    sum = number1 + number2;

    // Display Results
    cout << setw(5) << number1 << endl <<
    "+" << setw(4) << number2;
    cin.ignore();

    cout << sum;

    return 0;

}