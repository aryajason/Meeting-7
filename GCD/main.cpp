#include <iostream>
using namespace std;

// Function to calculate GCD
int gcd(int a, int b) {
    if (b == 0) { // Base case
        return a;
    } else {
        return gcd(b, a % b); // Recursive case
    }
}

int main() {
    int num1, num2;

    // Input from user
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Calculate and display GCD
    int result = gcd(num1, num2);
    cout << "The GCD is: " << result << endl;

    return 0;
}
