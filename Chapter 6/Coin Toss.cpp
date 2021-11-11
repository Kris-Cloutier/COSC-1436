/* Coin Toss by Kris Cloutier */

#include <iostream>
#include <random>

using namespace std;

// Prototype
int coinToss(int);

int main() {
    // Variables
    int times, result;

    // Get user input
    cout << "Enter number of times to flip coin: " << endl;
    cin >> times;

    // Call Function
    result = coinToss(times);

    if (result == 1) {
        cout << "heads";
    } else if ( result == 2) {
        cout << "tails";
    } else {
        cout << "Error";
    }

    return 0;
}

int coinToss(int t) {
    int r; // Variable to store the results of the random int engine
    
    // Define random number engine
    random_device tossEngine;
    uniform_int_distribution<int> randomInt(1,2);

    // Loop the random engine as many times as "t" is set for.
    for (int count = 0; count <= t; count++) {
        r = randomInt(tossEngine);
    }

    return r;
}