/* Monkey Business by kris Cloutier */

#include <iostream>

using namespace std;

// Prototypes
void getMonkey(int [][5]);
void report(int [][5]);

int main() {
    // Array
    int monkey[3][5];

    // Call getMonkey()
    getMonkey(monkey);

    // Call report()
    report(monkey);

    return 0;
}

void getMonkey(int m[][5]) {
    for (int i = 0; i < 5; i++) {
        cout << "Enter amount of food for monkey 1, day " << i + 1 << endl;
        cin >> m[0][i];

        if (m[0][i] < 0) {
            cout << "Error: " << m[0][i] << " is invalid, please re enter.";
            cin >> m[0][i];
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << "Enter amount of food for monkey 2, day " << i + 1 << endl;
        cin >> m[1][i];

        if (m[1][i] < 0) {
            cout << "Error: " << m[1][i] << " is invalid, please re enter.";
            cin >> m[1][i];
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << "Enter amount of food for monkey 3, day " << i + 1 << endl;
        cin >> m[2][i];

        if (m[2][i] < 0) {
            cout << "Error: " << m[2][i] << " is invalid, please re enter.";
            cin >> m[2][i];
        }
    }
}

void report(int m[][5]) {
    int average = 0,
        min = m[0][0],
        max = m[0][0];

    for (int i = 0; i < 5; i++) {
        average += m[0][i] + m[1][i] + m[2][i];

        if ( m[0][i] < min ) {
            min = m[0][i];
        } else if ( m[1][i] < min ) {
            min = m[1][i];
        } else if ( m[2][i] < min ) {
            min = m[2][i];
        } else if ( m[0][i] > max ) {
            max = m[0][i];
        } else if ( m[1][i] > max ) {
            max = m[1][i];
        } else if ( m[2][i] > max ) {
            max = m[2][i];
        }
    }

    cout << "Average food per day eaten: " << (average / 15) << endl <<
    "Least amount of food eaten by any one monkey: " << min << endl << 
    "Most amount of food eaten by any one monkey: " << max;
}