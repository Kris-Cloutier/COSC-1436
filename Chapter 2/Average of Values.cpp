/* Average Values
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {
    double var1 = 28,
        var2 = 32,
        var3 = 37,
        var4 = 24,
        var5 = 33,
        sum, // Var1-5 added together
        average; // Sum divided by 5

    sum = var1 + var2 + var3 + var4 + var5;
    average = sum / 5;

    cout << "Average value is " << average << endl;
}