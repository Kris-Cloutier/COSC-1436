/* Chapter 7 Programming Project by Kris Cloutier */

#include <iostream>

using namespace std;

// Prototypes
bool isValid(double);
double getRain(string);
double sumArray(double[], int);
int findLeast(double[], int);
int findMax(double[], int);

int main() {
    // Declare array
    const int MONTHS = 12;
    string monthNames[MONTHS] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    double rainfall[MONTHS];
    double total, average;
    int least, most;


    for (int m = 0; m < MONTHS; m++) {
        rainfall[m] = getRain(monthNames[m]);
    }

    total = sumArray(rainfall, MONTHS);
    average = total / MONTHS;
    least = findLeast(rainfall, MONTHS);
    most = findMax(rainfall, MONTHS);

    cout << "Total rainfall: " << total << endl;
    cout << "Average rainfall: " << average << endl;
    cout << "Least rainfall in: " << monthNames[least] << endl;
    cout << "Most rainfall in: " << monthNames[most] << endl;
}

bool isValid(double x) {
    return x >= 0.0;
}

double getRain(string month) {

    double rain;

    cout << "Enter rainfall for " << month << ": ";
    cin >> rain;

    while (!isValid(rain)) {
        cout << "invalid data (negative rainfall) -- retry" << endl;
        cin >> rain;
    }

    return rain;
}

// r = rainfall m = MONTHS
double sumArray(double r[], int m) {

    double sum = 0.0;

    for (int c = 0; c < m; c++)
        sum += r[c];
    return sum;
}

int findLeast(double x[], int y) {

    int min = 0;

    for (int c = 1; c < y; c++) {
        if (x[min] > x[c])
            min = c;
    }

    return min;
}

int findMax(double x[], int y) {

    int max = 0;

    for (int c = 1; c < y; c++) {
        if (x[max] < x[c])
            max = c;
    }

    return max;
}
