#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {
    if (n == 0) {
        return rev;
    }
    rev = rev * 10 + (n % 10);
    return reverseNumber(n / 10, rev);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Original: " << num << endl;
    cout << "Reversed: " << reverseNumber(num) << endl;

    return 0;
}
