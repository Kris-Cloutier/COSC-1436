/* Stadium Seating
By Kris Cloutier
*/

#include <iostream> 
#include <iomanip>

using namespace std;

int main() {

    // Define Constants
    const double classA = 15.0, classB = 12.0, classC = 9.0;

    // Define Variables
    double classASales, classBSales, classCSales, ticketSales;

    // Ask user how many tickets were sold for each class
    cout << "How many Class A tickets were sold?" << endl;
    cin >> classASales;
    cout << "How many Class B tickets were sold?" << endl;
    cin >> classBSales;
    cout << "How many Class C tickets were sold?" << endl;
    cin >> classCSales;

    // Calculate ticket sales
    ticketSales = (classA * classASales) + (classB * classBSales) + (classC + classCSales);

    // Display total ticket income
    cout << "Total ticket sales $" << setprecision(2) << showpoint << fixed << ticketSales << endl;

    return 0; 
}