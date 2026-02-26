#include <iostream>
using namespace std;

void printNumbers(int n) {
    // Base case
    if (n == 0)
        return;

    // Recursive call
    printNumbers(n - 1);

    cout << n << " ";
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    printNumbers(n);

    return 0;
}