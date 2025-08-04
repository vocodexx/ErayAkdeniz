#include <iostream>   // For input/output operations
#include <string>     // For using string variables

using namespace std;  

// Function to convert a string to lowercase (without using transform)
string toLowerCase(string str) {
    for (int i = 0; i < str.length(); i++) {       // Loop through each character
        if (str[i] >= 'A' && str[i] <= 'Z') {      // If character is uppercase
            str[i] = str[i] + 32;                  // Convert to lowercase (ASCII shift)
        }
    }
    return str; // Return the lowercase string
}

int main() { // Program starts here
    string answer;  // Variable to store user input

    // --- Basic Question ---
    cout << "What is the capital of France? "; // Ask the question
    cin >> answer;                             // Get user's answer (up to space)
    answer = toLowerCase(answer);              // Convert input to lowercase

    if (answer == "paris") {                   // Compare with correct answer
        cout << "Correct!" << endl;            // If correct, print message
    } else {
        cout << "Wrong! The correct answer is Paris." << endl; // If wrong, show correct answer
    }

    // --- Extended Quiz with 10 Questions ---
    // Array of European countries
    string countries[10] = {
        "France", "Germany", "Italy", "Spain", "Portugal",
        "Netherlands", "Belgium", "Austria", "Greece", "Sweden"
    };

    // Corresponding correct capital answers (in lowercase)
    string correctAnswers[10] = {
        "paris", "berlin", "rome", "madrid", "lisbon",
        "amsterdam", "brussels", "vienna", "athens", "stockholm"
    };

    int score = 0; // Variable to track correct answers

    cout << "\n--- Europe Capitals Quiz ---\n"; // Display quiz header

    // Loop through each question
    for (int i = 0; i < 10; i++) {
        cout << "What is the capital of " << countries[i] << "? "; // Ask the question
        cin >> answer;                         // Get user's answer
        answer = toLowerCase(answer);          // Convert to lowercase

        if (answer == correctAnswers[i]) {     // Compare with correct answer
            cout << "Correct!" << endl;        // Show if correct
            score++;                           // Increase score
        } else {
            cout << "Wrong! Correct answer: " << correctAnswers[i] << endl; // Show correct answer
        }
    }

    // Show final score
    cout << "\nYou got " << score << " out of 10 correct!" << endl;

    return 0; // End of program
}