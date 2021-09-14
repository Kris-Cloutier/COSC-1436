/* Chapter 3 Programming Project 3
By Kris Cloutier
*/

#include <iostream>
#include <string>

using namespace std;

int main() {

    // Initalize Variables
    string name, city, college, profession, animal, petName;
    int age;

    // Get user info
    cout << "Enter name: " << endl;
    getline(cin, name);
    cout << "Enter city: " << endl;
    getline(cin, city);
    cout << "Enter age: " << endl;
    cin >> age;
    cin.ignore();
    cout << "Enter college: " << endl;
    getline(cin, college);
    cout << "Enter profession: " << endl;
    getline(cin, profession);
    cout << "Enter animal: " << endl;
    getline(cin, animal);
    cout << "Enter pet name: " << endl;
    getline(cin, petName);
    cout << endl << endl;

    // Story time!
    cout << "There once was a person named " << name << " who lived in " << city << "." << endl 
    << "At the age of " << age << ", " << name << " went to college at " << college << "." << endl 
    << name << " graduated and went to work as a " << profession << "." << endl
    << "Then, " << name << " adopted a(n) " << animal << " named " << petName << "." << endl 
    << "They both lived happily ever after!" << endl; 

    return 0;
}