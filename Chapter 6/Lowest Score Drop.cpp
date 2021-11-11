/* Lowest Score Drop by Kris Cloutier */

#include <iostream>

using namespace std;

// Prototypes
void getScore(int &, int &, int &, int &, int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main() {
    // Variables 
    int test1, test2, test3, test4, test5;

    // Call function to get scores
    getScore(test1, test2, test3, test4, test5);

    // Call function to drop lowest score then find the average if the top 4 scores
    if (test1 >= 0 && test1 <= 100 && test2 >= 0 && test2 <= 100 && test3 >= 0 && test3 <= 100 && test4 >= 0 && test4 <= 100 &&  test5 >= 0 && test5 <= 100)
        calcAverage(test1, test2, test3, test4, test5);
    else 
        cout << "Error: Scores must be between 0-100.";

    return 0;
}

void getScore(int &t1, int &t2, int &t3, int &t4, int &t5) {
    cout << "Enter 5 test scores: " << endl;
    cin >> t1 >> t2 >> t3 >> t4 >> t5;
}
void calcAverage(int t1, int t2, int t3, int t4, int t5) {
    int result, average; 

    result = findLowest(t1, t2, t3, t4, t5);

    if ( result == 1) {
        average = ( t2 + t3 + t4 + t5 ) / 4;

        cout << "Average test score is " << average << endl;

    } else if ( result == 2) {
        average = ( t1 + t3 + t4 + t5 ) / 4; 

        cout << "Average test score is " << average << endl;

    } else if ( result == 3) {
        average = ( t1 + t2 + t4 + t5 ) / 4; 

        cout << "Average test score is " << average << endl;

    } else if ( result == 4) {
        average = ( t1 + t3 + t2 + t5 ) / 4; 

        cout << "Average test score is " << average << endl;

    } else if ( result == 5) {
        average = ( t1 + t3 + t4 + t2 ) / 4; 

        cout << "Average test score is " << average << endl;

    } else {
        cout << "Error finding average.";
    }
}

int findLowest(int t1, int t2, int t3, int t4, int t5) {
    if ( t1 < t2 && t1 < t3 && t1 < t4 && t1 <t5 ) {
        return 1;
    } else if ( t2 < t1 && t2 < t3 && t2 < t4 && t2 <t5 ) {
        return 2;
    } else if ( t3 < t2 && t3 < t1 && t3 < t4 && t3 <t5 ) {
        return 3;
    } else if ( t4 < t2 && t4 < t3 && t4 < t1 && t4 <t5 ) {
        return 4;
    } else if ( t5 < t2 && t5 < t3 && t5 < t4 && t5 <t1 ) {
        return 5;
    } else {
        cout << "Error finding lowest";
        return 0;
    }
}