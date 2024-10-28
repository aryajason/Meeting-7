#include <iostream>
using namespace std;

// Function to perform addition
int add(int a, int b) {
    return a + b;
}

// Function to perform subtraction
int subtract(int a, int b) {
    return a - b;
}

int main() {
    int a = 10;
    int b = 5;

    int expectedAdd = 15;   // Correct expected sum of 10 and 5
    int expectedDiff = 5;   // Correct expected difference of 10 and 5

    // Compare the expected values with the actual function results
    if (expectedAdd == add(a, b) && expectedDiff == subtract(a, b)) {
        cout << "SUCCESSFULLY" << '\n';
    } else {
        cout << "TEST FAILED" << '\n';
    }

    return 0;
}
