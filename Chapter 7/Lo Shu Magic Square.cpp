/* Lo Shu Magic Square by Kris Cloutier */

#include <iostream>
#include <random>

using namespace std;

// Prototypes
void manEntry(int [][3]);
void autoEntry(int [][3]);
void calcResults(int [][3]);

int main() {
    // Array
    int magicSquare[3][3];
    char var;

    // Ask for numbers or auto generate numbers
    cout << "Do you want to enter your own numbers? (Y or N): ";
    cin >> var;

    // Call functions
    if (var == 'Y'){
        manEntry(magicSquare);
    } else {
        autoEntry(magicSquare);
    }

    calcResults(magicSquare);

    return 0;
}

void manEntry(int array[][3]) {
    for ( int i = 0; i < 3; i++) {
        cout << "Enter numbers for row 1:";
        cin >> array[0][i];

        cout << "Enter numbers for row 2:";
        cin >> array[1][i];

        cout << "Enter numbers for row 1:";
        cin >> array[2][i];
    }
}

void autoEntry(int array[][3]) {
    random_device autoNum;
    uniform_int_distribution<int> num(1, 9);

    for (int i = 0; i < 9; i++) {
        array[0][i] = num(autoNum);
        array[1][i] = num(autoNum);
        array[2][i] = num(autoNum);
    }
}

void calcResults(int array[][3]) {
    int sum = array[0][0] + array[0][1] + array[0][2];

    if ( sum == array[1][0] + array[1][1] + array[1][2] && sum == array[2][0] + array[2][1] + array[2][2] && sum == array[0][0] + array[1][0] + array[2][0] && sum == array[0][1] + array[1][1] + array[2][1] && sum == array[0][2] + array[1][2] + array[2][2] && sum == array[0][0] + array[1][1] + array[2][2] && sum == array[0][2] + array[1][1] + array[2][0]) {
        cout << "Congrats! You have a Lo Shu Magic Square!";

        for (int i = 0; i < 3; i++) {
            cout << array[0][i] << " ";
        }

        cout << endl;

        for (int i = 0; i < 3; i++) {
            cout << array[1][i] << " ";
        }

        cout << endl;

        for (int i = 0; i < 3; i++) {
            cout << array[2][i] << " ";
        }
    } else {
        cout << "Sorry, no magic square.";
    }
}