/* Male and Female Percentages
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    // Define variables
    double males, females, percentMale, percentFemale, totalStudents;

    // Get amount of males and females from user
    cout << "Enter total males in class: " << endl;
    cin >> males;

    cout << "Enter total females in class: " << endl;
    cin >> females;

    // Calculate percentage of males and females
    totalStudents = males + females;
    percentMale = (males / totalStudents) * 100;
    percentFemale = (females / totalStudents) * 100;

    // Display results to user
    cout << "Males make up " << percentMale << "% of the class and females make up " << percentFemale << "%." << endl;

    return 0;
}