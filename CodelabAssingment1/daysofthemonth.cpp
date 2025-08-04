#include <iostream>   // For input/output

using namespace std;  // Use standard namespace

int main() { // Program starts here
    int month; // Variable to store the month number

    cout << "Enter a month number (1-12): "; // Ask user for a month number
    cin >> month; // Read input from the user

    // Use switch to determine days in the month
    switch (month) {
        case 1:  // January
        case 3:  // March
        case 5:  // May
        case 7:  // July
        case 8:  // August
        case 10: // October
        case 12: // December
            cout << "This month has 31 days." << endl;
            break;

        case 4:  // April
        case 6:  // June
        case 9:  // September
        case 11: // November
            cout << "This month has 30 days." << endl;
            break;

        case 2:  // February
            cout << "This month has 28 or 29 days (depending on leap year)." << endl;
            break;

        default: // If input is not between 1 and 12
            cout << "Invalid month number. Please enter a number from 1 to 12." << endl;
            break;
    }

    return 0; // End of program
}