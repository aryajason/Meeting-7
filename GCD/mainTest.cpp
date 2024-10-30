#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) { 
        return a;
    } 
    else {
        return gcd(b, a % b); 
    }
}
int main() {
    int num1 = 10, num2 = 4;
int expoutput = 2;

	if(expoutput==gcd(num1, num2)) cout<<"SUCCESSFULLY"<<'\n';
	else cout<<"FAILED"<<'\n';
}
