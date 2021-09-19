/* How much pizza
By Kris Cloutier
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // Variables
    int slices, guests, pizzas;
    double diameter, radius, area;

    // Ask for diameter of pizza
    cout << "Enter pizza diameter: " << endl;
    cin >> diameter;

    cout << "Enter number of Guests:" << endl;
    cin >> guests;

    // Calculate number of slices 
    radius = diameter / 2;
    area = M_PI * (pow(radius, 2.0));
    slices = area / 14.125;
    guests *= 4;
    pizzas = guests / slices;

    // Display a message telling the number of slices
    cout << pizzas << " pizzas" << endl;

    return 0;
}