/* Star Search by Kris Cloutier */

#include <iostream>

using namespace std;

// Prototypes
void getJudgeData(double &, double &, double &, double &, double &);
void calcScore(int, int, int, int, int);
int findLowest(int, int, int, int, int);
int findHighest(int, int, int, int, int);

int main() {
    // Variables 
    double score1, score2, score3, score4, score5;

    // Call function to get scores
    getJudgeData(score1, score2, score3, score4, score5);

    // Call function to drop lowest score then find the average if the top 4 scores
    if (score1 >= 0 && score1 <= 100 && score2 >= 0 && score2 <= 100 && score3 >= 0 && score3 <= 100 && score4 >= 0 && score4 <= 100 &&  score5 >= 0 && score5 <= 100)
        calcScore(score1, score2, score3, score4, score5);
    else 
        cout << "Error: Scores must be between 0-100.";

    return 0;
}

void getJudgeData(double &t1, double &t2, double &t3, double &t4, double &t5) {
    cout << "Enter 5 test scores: " << endl;
    cin >> t1 >> t2 >> t3 >> t4 >> t5;
}
void calcScore(int t1, int t2, int t3, int t4, int t5) {
    int lowest, highest, average; 

    lowest = findLowest(t1, t2, t3, t4, t5);
    highest = findHighest(t1, t2, t3, t4, t5);

    average = (( t1 + t2 + t3 + t4 + t5 ) - lowest - highest) / 3;

    cout << "Your score is: " << average << endl << lowest << highest;
}

int findLowest(int t1, int t2, int t3, int t4, int t5) {
    if ( t1 < t2 && t1 < t3 && t1 < t4 && t1 <t5 ) {
        return t1;
    } else if ( t2 < t1 && t2 < t3 && t2 < t4 && t2 <t5 ) {
        return t2;
    } else if ( t3 < t2 && t3 < t1 && t3 < t4 && t3 <t5 ) {
        return t3;
    } else if ( t4 < t2 && t4 < t3 && t4 < t1 && t4 <t5 ) {
        return t4;
    } else if ( t5 < t2 && t5 < t3 && t5 < t4 && t5 <t1 ) {
        return t5;
    } else {
        cout << "Error finding lowest";
        return 0;
    }
}

int findHighest(int t1, int t2, int t3, int t4, int t5) {
    if ( t1 > t2 && t1 > t3 && t1 > t4 && t1 > t5 ) {
        return t1;
    } else if ( t2 > t1 && t2 > t3 && t2 > t4 && t2 > t5 ) {
        return t2;
    } else if ( t3 > t2 && t3 > t1 && t3 > t4 && t3 > t5 ) {
        return t3;
    } else if ( t4 > t2 && t4 > t3 && t4 > t1 && t4 > t5 ) {
        return t4;
    } else if ( t5 > t2 && t5 > t3 && t5 > t4 && t5 > t1 ) {
        return t5;
    } else {
        cout << "Error finding highest";
        return 0;
    }
}