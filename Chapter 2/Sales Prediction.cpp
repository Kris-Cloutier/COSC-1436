/* Sales Prediction
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {
    
    double percent = 0.58, // Percent of sales
            sales = 8.6, // Total yearly sales
            totalSales; // To store total sales from East Coast Division

    // Multiply sales by percent
    totalSales = sales * percent;

    cout << "The East Coast Division will generate $" << totalSales << "m this year." << endl;

}