/* Days Out byb Kris Cloutier */

#include <iostream> 

using namespace std;

// Prototypes
int daysMissed(int);
double calcAverage(int, int);

int main() {
    // Variables
    int employees, absent;
    double average;

    // Get user input
    cout << "Enter total number of employees: " << endl;
    cin >> employees;

    // Call functions
    if (employees >= 1) {
        absent = daysMissed(employees);
        average = calcAverage(employees, absent);

        cout << "The average days missed per employee is: " << average << " days." << endl;
 
    } else {
        cout << "Error: Please enter a value above 1.";
    }

}

int daysMissed(int e) {
    int days, total = 0;

    // Loop through total employees then 
    for (int count = 1; count <= e; count++){
        cout << "Enter total days missed for employee #" << count << ": " << endl;
        cin >> days;
        
        if (days >= 0 ) 
            total += days;
        else
            cout << "Error: Days can not be a negative number.";
    }

    return total;
}

double calcAverage(int e, int d) {
    int total;

    total = d / e;

    return total;
}