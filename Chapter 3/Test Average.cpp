/* Test Average
By Kris Cloutier
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    // Define Variables
    int test1, test2, test3, test4, test5, average;

    // Get test scores
    cout << "Enter test 1 score: " << endl;
    cin >> test1;
    cout << "Enter test 2 score: " << endl;
    cin >> test2;
    cout << "Enter test 3 score: " << endl;
    cin >> test3;
    cout << "Enter test 4 score: " << endl;
    cin >> test4;
    cout << "Enter test 5 score: " << endl;
    cin >> test5;

    // Calculate test average
    average = (test1 + test2 + test3 + test4 + test5) / 5;

    // Display average
    cout << endl << "Your test average is " << setprecision(1) << fixed << average << "%" << endl;

    return 0;
}