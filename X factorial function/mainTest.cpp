#include <iostream>
using namespace std;

int factorial(int x) {
    if (x <= 1) { 
    return 1;
    } 
    else {
        return x * factorial(x - 1); 
    }
}
int main() {
    int num = 5;

    int expOutput = 120;

	if(expOutput==factorial(num)) cout<<"SUCCESSFULLY"<<'\n';
	else cout<<"FAILED!!!"<<'\n';

    return 0;
}
