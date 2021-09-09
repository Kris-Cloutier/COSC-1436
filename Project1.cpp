/* Chapter 2 Project 1
By Kris Cloutier
*/
#include <iostream>

using namespace std;

int main() {
    
    int years;
    double seaRise, totalRise;
    
    seaRise = 1.5; // Rising ocean 1.5 mill meter per year
    
    years = 5;
    totalRise = seaRise * years; //multiply the Sea rise by years
    cout << "In " << years << " years the ocean's level will be higher by " << totalRise << "millimeters.\n";
    
    years = 7;
    totalRise = seaRise * years; //multiply the Sea rise by years
    cout << "In " << years << " years the ocean's level will be higher by " << totalRise << "millimeters.\n";
    
    years = 10;
    totalRise = seaRise * years; //multiply the Sea rise by years
    cout << "In " << years << " years the ocean's level will be higher by " << totalRise << "millimeters.\n";
    
    return 0;
}