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
  int a = 10 ;
  int b = 5 ;

  int expectedAdd = 55;
	int expectedDiff = 35;

	if(expectedAdd==add(a, b) && expectedDiff==subtract(a, b))
	{
		cout<<"SUCCESSFULLY"<<'\n';
	}
}
