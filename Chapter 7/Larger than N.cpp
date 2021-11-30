/* Larger than N by Kris Cloutier */

#include <iostream>

using namespace std;

// Prototype
void displayGreater(int [], int, int);

int main() {
    // Array
    const int SIZE = 8;
    int array[SIZE] = {15, 65, 2, 4, 21, 7, 1, 74},
        n = 7;

    // Call function
    displayGreater(array, SIZE, n);

    return 0;
}

void displayGreater(int array[], int size, int n) {
    for (int i = 0; i < size; i++) {
        if (array[i] > n) {
            cout << array[i] << " ";
        }
    }
}