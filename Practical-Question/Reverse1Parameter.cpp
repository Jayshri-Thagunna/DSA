#include <iostream>
using namespace std;

int reverseHelper(int n, int place) {
    if (n < 10) {
        return n * place;
    }
    return (n % 10) * place + reverseHelper(n / 10, place / 10);
}

int reverseNumber(int n) {
    int place = 1;
    int temp = n;
    while (temp >= 10) {
        place *= 10;
        temp /= 10;
    }
    return reverseHelper(n, place);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Original: " << num << endl;
    cout << "Reversed: " << reverseNumber(num) << endl;

    return 0;
}
