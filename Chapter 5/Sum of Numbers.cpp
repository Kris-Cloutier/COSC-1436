/*
Sum of Numbers
By Kris Cloutier
*/

#include <iostream>

using namespace std;

int main() {

	// Define Variables
	int input, // User input
		add, // To add up counts
		sum; // Sum of user input

	// Get user info
	cout << "Enter a number to view the sum of all the numbers before it: \n";
	cin >> input;

	// Loop and Calculate
	if (input > 0) {
		for (int count = 0; count <= input; count++) {
			add = count;
			sum += add;
		}

		// Display Results
		cout << sum;
	} else {
		cout << "Error, please enter a postive number.";
	}

	return 0;
}