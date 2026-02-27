#include <iostream>
using namespace std;

int reverseStatic(int n) {
    static int rev = 0; 
    
    rev = rev * 10 + (n % 10);
    return reverseStatic(n / 10);
}

int main() {
    int num = 123;
    cout<< reverseStatic(num);
}

