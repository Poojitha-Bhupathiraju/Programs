#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    
    // Just to demonstrate ++, let's increment num before factorial calculation
    ++num;  // increment num by 1
    
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    
    return 0;
}
