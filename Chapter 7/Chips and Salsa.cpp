/* Chips and Salsa by kris Cloutier */

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

//Prototypes
void getSales(string [], int []);
void calcSales(string [], int []);

int main() {
    // Declare Arrays
    string names[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int jarsSold[5];

    // Call getSales()
    getSales(names, jarsSold);

    // Call calcSales()
    calcSales(names, jarsSold);

    return 0;

}

void getSales(string names[], int jars[]) {
    for ( int i = 0; i < 5; i++){
        cout << "Enter total jars sold for " << names[i] << " salsa:" << endl;
        cin >> jars[i];

        if ( jars[i] < 0 ) {
            cout << "Error: " << names[i] << " has an negative number of jars sold. Please re enter."  << endl;
            cin  >> jars[i];
        }
    }
}

void calcSales( string names[], int jars[]) {
    int total = 0,
        min = jars[0],
        max = jars[0];
    string high,
        low;

    for (int i = 0; i < 5; i++) {
        total += jars[i];

        if (min < jars[i]) {
            min = jars[i],
            low = names[i];
        } else if (max > jars[i]) {
            max = jars[i];
            high = names[i];
        }
    }

    cout << setw(5) << "Sales Report" << endl <<
    "Total Sales:" << setw(12) << total << endl <<
    "Best selling:" << setw(11) << high << endl << 
    "Least selling:" << setw(10) << low << endl; 
}