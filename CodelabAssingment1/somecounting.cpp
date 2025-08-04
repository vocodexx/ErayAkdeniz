#include <iostream>   // For input/output

using namespace std;  
int main() { // Program starts here

    // 1. Count up from 0 to 50 (step +1)
    cout << "Counting up from 0 to 50:\n";
    for (int i = 0; i <= 50; i++) {      // Start at 0, end at 50, increment by 1
        cout << i << " ";                // Print current value
    }
    cout << "\n\n";                      // New line for separation

    // 2. Count down from 50 to 0 (step -1)
    cout << "Counting down from 50 to 0:\n";
    for (int i = 50; i >= 0; i--) {      // Start at 50, end at 0, decrement by 1
        cout << i << " ";
    }
    cout << "\n\n";

    // 3. Count up from 30 to 50 (step +1)
    cout << "Counting up from 30 to 50:\n";
    for (int i = 30; i <= 50; i++) {     // Start at 30, end at 50, increment by 1
        cout << i << " ";
    }
    cout << "\n\n";

    // 4. Count down from 50 to 10 (step -2)
    cout << "Counting down from 50 to 10 (by 2s):\n";
    for (int i = 50; i >= 10; i -= 2) {  // Start at 50, end at 10, decrement by 2
        cout << i << " ";
    }
    cout << "\n\n";

    // 5. Count up from 100 to 200 (step +5)
    cout << "Counting up from 100 to 200 (by 5s):\n";
    for (int i = 100; i <= 200; i += 5) { // Start at 100, end at 200, increment by 5
        cout << i << " ";
    }
    cout << "\n";

    return 0; // End of program
}