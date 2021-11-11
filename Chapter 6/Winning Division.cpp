/* Winning Division by Kris Cloutier */

#include <iostream>
#include <iomanip>

using namespace std;

// Prototypes
double getSales();
void findHighest(double, double, double, double);

int main(){
    // Variables
    double northEast, southEast, northWest, southWest, highest;

    // Call Funtions
    northEast = getSales();
    southEast = getSales();
    northWest = getSales();
    southWest = getSales();

    findHighest(northEast, southEast, northWest, southWest);

    return 0;
}

double getSales(){
    double sales;
    cout << "Enter division's quarterly sales: " << endl;
    cin >> sales;

    if (sales > 0 ) {
        return sales;
    } else {
        cout << "Sales must be more than $0";
        return 0;
    }
}

void findHighest(double div1, double div2, double div3, double div4){
    if ( div1 > div2 && div1 > div3 && div1 > div4 ) {
        cout << "Northeast is the winner! Total sales $" << setprecision(2) << fixed << div1 << endl;

    } else if ( div2 > div1 && div2 > div3 && div2 > div4 ) {
        cout << "Southeast is the winner! Total sales $" << setprecision(2) << fixed << div2 << endl;

    } else if ( div3 > div1 && div3 > div2 && div3 > div4 ) {
        cout << "Northwest is the winner! Total sales $" << setprecision(2) << fixed << div3 << endl;

    } else if ( div4 > div1 && div4 > div2 && div4 > div3 ) {
        cout << "Southwest is the winner! Total sales $" << setprecision(2) << fixed << div4 << endl;

    } else {
        cout << "Error: no values are larger";
    }
}