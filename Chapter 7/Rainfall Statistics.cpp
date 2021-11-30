/* Rainfall Statistics by Kris Cloutier */

#include <iostream>

using namespace std;

// Prototypes
void getRain(double []);
void calcRain(double []);

int main() {
    // Variables
    double rainfall[12];

    // Get rainfall amounts
    getRain(rainfall);
    
    // Calculate total and average while also finding min and max rain
    calcRain(rainfall);


}

void getRain(double rainfall[]) {
    double rain;
    cout << "Enter rainfall amounts for each month:" << endl;
    for ( int i = 0; i < 12; i++) {
        cin >> rainfall[i];
    }

    for (int i = 0; i < 12; i++) {
        if (rainfall[i] < 0) {
            cout << "Error: " << rainfall[i] << " is a negative number. Negative rainfall amounts are not valid inputs. Please re enter the value: " << endl;
            cin >> rainfall[i];
        }
    }
}

void calcRain(double rainfall[]) {
    double total = 0,
        average = 0,
        min = rainfall[0],
        max = rainfall[0];

    for ( int i = 0; i < 12; i++ ) {
        total += rainfall[i];

        if ( min > rainfall[i] ) {
            min = rainfall[i];
        } else if ( max < rainfall[i] ) {
            max = rainfall[i];
        }
    }

    average = total / 12;
    
    cout << "Total rainfall for the year: " << total <<  endl <<
    "Average monhtly rainfall: " << average << endl <<
    "Highest rainfall amount: " << max << " inches" << endl << 
    "Lowest rainfall amount: " << min << " inches" << endl;
}