/* Chapter 5 Project 1
By Kris Cloutier
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    // Variables
    int count = 0; //
    double number; //    
    double total = 0.0; //  
    double average; //
    
    //File stream object
    ifstream inputFile;
    
    // Open the file.
    inputFile.open("Random.txt");
    cout << "Reading numbers from file.\n";
    
    // Read the numbers from the file.
    while (inputFile >> number) {
        count++;
        total += number;
    }
    
    // Close the file.
    inputFile.close();
    
    // Calculate the average of the numbers.
    average = total / count;
    
    // Display the results.
    cout << "Numbers of numbers: " << count << "\n";
    cout << "Sum of numbers: " << total << "\n";
    cout << "Average of the numbers: " << average << "\n";

    return 0;
}
