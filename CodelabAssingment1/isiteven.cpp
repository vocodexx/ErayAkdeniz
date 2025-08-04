#include <iostream>  // For input and output

using namespace std; // Use standard namespace

// Function that returns true if number is even, false otherwise
bool isEven(int number) {
    return number % 2 == 0; // Returns true if divisible by 2
}

int main() { // Program starts here
    int num; // Variable to store user input

    cout << "Enter a number: "; // Prompt user
    cin >> num;                 // Get input

    // Call isEven() and use result to decide message
    if (isEven(num)) {
        cout << "The provided number is even" << endl;
    } else {
        cout << "The provided number is odd" << endl;
    }

    return 0; // End of program
}