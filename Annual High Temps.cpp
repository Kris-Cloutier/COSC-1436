/* Annual High Temps
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

    double newYork ,
    denver,
    phoenix,
    rise = 0.02;

    newYork = (85 * rise) + 85;
    denver = (88 * rise) + 88;
    phoenix = (106 * rise) + 106;

    cout << "If temps rise by 2% the average temp will be:" << endl <<
    "New York: " << newYork << endl <<
    "Denver: " << denver << endl <<
    "Phoenix: " << phoenix << endl;

    return 0;

}