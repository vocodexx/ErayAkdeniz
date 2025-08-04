#include <iostream>   // For input/output

using namespace std;  // Use standard namespace

int main() { // Program starts here
    int correctPassword = 12345;  // Set the correct password (regular int)
    int userInput;                // To store user's attempt
    int attemptsLeft = 5;         // Maximum attempts allowed

    // Loop until password is correct or attempts run out
    while (attemptsLeft > 0) {
        cout << "Enter password: ";  // Ask user to enter password
        cin >> userInput;            // Get user's input

        if (userInput == correctPassword) { // Check if input matches password
            cout << "Welcome to the Secure Area!" << endl; // Success message
            break; // Exit loop
        } else {
            attemptsLeft--; // Reduce attempt count

            if (attemptsLeft > 0) {
                // Inform user of remaining attempts
                cout << "Incorrect password. Attempts left: " << attemptsLeft << endl;
            } else {
                // If all attempts used
                cout << "Too many failed attempts. Authorities have been alerted!" << endl;
            }
        }
    }

    return 0; // End program
}