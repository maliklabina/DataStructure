#include <iostream>
using namespace std;
 
void fibonacci(int n) {
    int a = 0, b = 1, c;
 
    if (n == 0) return;
 
    cout << a << " "; // First Fibonacci number
    if (n == 1) return;
 
    cout << b << " "; // Second Fibonacci number
    for (int i = 2; i < n; i++) {
        c = a + b; // Next Fibonacci number
        cout << c << " ";
        a = b; // Update for next iteration
        b = c;
    }
}
 
int main() {
    int n = 10; // Number of terms
    cout << "Fibonacci Series: ";
    fibonacci(n);
    cout << endl;
    return 0;
}
