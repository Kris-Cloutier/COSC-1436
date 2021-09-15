/* Box Office
By Kris Cloutier
*/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {

    // Define Constants
    const double adult = 10.0, child = 6.0, royality = 0.8;

    // Define Variables
    int adultTickets, childTickets;
    double gross, net, paid;
    string movie;

    // Get user info
    cout << "Enter Movie Name: " << endl;
    getline(cin, movie);
    cin.ignore();

    cout << "Enter adult tickets sold: " << endl;
    cin >> adultTickets;

    cout << "Enter child tickets sold: " << endl;
    cin >> childTickets;

    // Calculate Box office revenue
    gross = (adultTickets * adult) + (childTickets * child);
    paid = gross * royality;
    net = gross - paid;

    // Display report
    cout << "Movie Name:" << setw(21) << '"' << movie << '"' << endl <<
    "Adult Tickets Sold:" << setw(16) << adultTickets << endl << 
    "Child Tickets Sold:" << setw(16) << childTickets << endl <<
    "Gross Box Office Profit:" << setw(9) << setprecision(2) << fixed << "$" << gross << endl << 
    "Net Box Office Profit:" << setw(11) << setprecision(2) << fixed << "$" << net << endl <<
    "Amount Paid to Distributor" << setw(7) << setprecision(2) << fixed << "$" << paid << endl; 

    return 0;
}