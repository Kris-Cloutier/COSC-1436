/* Chapter 3 Project 2
By Kris Cloutier
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // Variables
    int slices;
    double diameter, radius, area;

    // Ask for diameter of pizza
    cout << "Enter pizza diameter: " << endl;
    cin >> diameter;

    // Calculate number of slices 
    radius = diameter / 2;
    area = M_PI * (pow(radius, 2.0));
    slices = area / 14.125;

    // Display a message telling the number of slices
    cout << slices << " slices" << endl;

    return 0;
}