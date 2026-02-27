#include <iostream>
using namespace std;

int fibonacci(int n) {
    // Base case
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter position: ";
    cin >> n;

    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n);

    return 0;
}