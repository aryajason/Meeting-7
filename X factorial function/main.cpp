#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int x) {
    if (x <= 1) { 
    return 1;
    } 
    else {
        return x * factorial(x - 1); 
    }
}

int main() {
    int num;

    // Input from user
    cout << "Enter number: ";
    cin >> num;

    // Check for non-negative input
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } 
    else {
        // Calculate and display factorial
        cout << "The factorial of " << num << " is: " << factorial(num) << endl;
    }

    return 0;
}
