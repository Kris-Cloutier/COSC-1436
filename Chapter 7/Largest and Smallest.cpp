/* Largest and Smallest Array Values by Kris Cloutier */

#include <iostream>

using namespace std;

int main() {
    // Variables
    int array[10],
        min = array[0],
        max = array[0];

    // Get values
    cout << "Enter 10 values to store in the array:" << endl;
    cin >> array[0] >> array[1] >> array[2] >> array[3] >> array[4] >> array[5] >> array[6] >> array[7] >> array[8] >> array[9];

    // Find largest and smallest value in array
    for ( int val : array ) {
        if ( val < min ) {
            min = val;
        } else if ( val > max ) {
            max = val;
        }
    }

    // Display results
    cout << "The largest array value is " << max << " while the smallest value is " << min << endl;
}