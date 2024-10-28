#include <iostream>
using namespace std;

// Function to perform addition
void add(int a, int b) {
    int result = a + b;
    cout << "The sum is " << result << endl;
}

// Function to perform subtraction
void subtract(int a, int b) {
    int result = a - b;
    cout << "The difference between " << a << " and " << b << " is: " << result << endl;
}

int main() {
    int x, y;
    
    // Input from user
    cout << "Enter two integers: ";
    cin >> x >> y;

    // Call the add function
    add(x, y);
    
    // Call the subtract function
    subtract(x, y);

    return 0;
}
