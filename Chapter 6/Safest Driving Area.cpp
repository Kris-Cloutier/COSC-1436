/* Safest Driving Area by Kris Cloutier */

#include <iostream>
#include <iomanip>

using namespace std;

// Prototypes
int getNumAccidents();
void findLowest(int, int, int, int, int);

int main() {

    // Variables
    int north, south, east, west, central;

    // Call functions
    north = getNumAccidents();
    south = getNumAccidents();
    east = getNumAccidents();
    west = getNumAccidents();
    central = getNumAccidents();

    findLowest(north, south, east, west, central);

    return 0;

}

int getNumAccidents(){
    int t;
    cout << "Enter total accidents: " << endl;
    cin >> t;

    if (t > 0) {
        return t;
    } else {
        cout << "Error: Total accidents must be above 0.";
        return 0;
    }
    
}

void findLowest(int arg1, int arg2, int arg3, int arg4, int arg5) { 
    if ( arg1 < arg2 &&  arg1 < arg3 && arg1 < arg4 && arg1 < arg5 ){
        cout << "Region North is the safests with " << arg1 << " accidents." << endl;

    } else if ( arg2 < arg1 &&  arg2 < arg3 && arg2 < arg4 && arg2 < arg5 ){
        cout << "Region South is the safests with " << arg2 << " accidents." << endl;

    } else if ( arg3 < arg1 &&  arg3 < arg2 && arg3 < arg4 && arg3 < arg5 ){
        cout << "Region East is the safests with " << arg3 << " accidents." << endl;
        
    } else if ( arg4 < arg1 &&  arg4 < arg2 && arg4 < arg3 && arg4 < arg5 ){
        cout << "Region West is the safests with " << arg4 << " accidents." << endl;
        
    } else if ( arg5 < arg1 &&  arg5 < arg2 && arg5 < arg3 && arg5 < arg4 ){
        cout << "Region Cental is the safests with " << arg5 << " accidents." << endl;
        
    } else {
        cout << "Error";
    }
}