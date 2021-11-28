/* Order Status by Kris Cloutier */

#include <iostream>
#include <iomanip>

using namespace std;

// Prototypes 
void orderSpool(char &, int &, int &, double &);
void orderSummary();

int main() {
    const double  COST_OF_SPOOL = 100.00;

    char extraShipping;
    int spoolsOrdered, inStock;
    double shipping, extraShippingCost;

    orderSpool(extraShipping, spoolsOrdered, inStock, extraShippingCost);
    orderSummary(spoolsOrdered, inStock, COST_OF_SPOOL);


}

void orderSpool(char &y, int &so, int &is, double &esc) {

    cout << "Enter total spools ordered: " << endl;
    cin >> so;

    cout << "Enter total spools instock: " << endl;
    cin >> is;

    cout << "Extra Shipping? (Y/N): " << endl;
    cin >> y;

    if (y == 'y' || y == 'Y') {
        cout << "Enter extra shipping charge: " << endl;
        cin >> esc;
    } 
}

void orderSummary(int ordered, int stock, double spoolCost, ) {

    int backOrder;
    double subtotal, shipping;

    backOrder = ordered - stock;

    // Calculate the subtotal based on order and stock level. IF there is a back order then we only
    // want to know the subtotal of the order for what can be shipped today, otherwise we can see
    // the total based on the amount ordered.
    if (backOrder > 0) 
        subtotal = stock * spoolCost;
    else 
        subtotal = ordered * spoolCost;
    
    

    cout << "Total spools ordered: " << ordered << endl <<
    "Total spools on back order: " << backOrder << endl << 
    "Subtotal for spools ready for shippment: $" << setprecision(2) << fixed << subtotal << end <<
    "Total Shipping Cost: $" << shipping << end << 
    "Total: $" << setprecision(2) << fixed << orderTotal << endl;
}