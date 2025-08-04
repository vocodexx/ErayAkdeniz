#include <iostream>   // For input/output
#include <string>     // For using strings

using namespace std; 

int main() { // Program starts here
    // Declare and initialize the array of names
    string names[] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};

    // Get the number of elements in the array
    int size = sizeof(names) / sizeof(names[0]);

    // Optional: Allow user to input the name to search
    string searchName;
    cout << "Enter the name to search: ";
    cin >> searchName; // Read user input

    bool found = false; // Flag to track if name is found

    // Loop through each name in the array
    for (int i = 0; i < size; i++) {
        if (names[i] == searchName) { // Compare current name with search term
            cout << searchName << " was found in the list!" << endl;
            found = true; // Mark as found
            break;        // Exit loop early
        }
    }

    // If name was not found after the loop
    if (!found) {
        cout << searchName << " was NOT found in the list." << endl;
    }

    return 0; // End of program
}