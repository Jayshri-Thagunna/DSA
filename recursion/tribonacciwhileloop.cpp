#include<iostream>
using namespace std;


int tribonacci(int n) {

    if(n == 0) {
        return 0;
    }

    if(n == 1) {
        return 1;
    }

    int a = 0, b =1, c=1, next;
    int i = 3;

    while(i <= n){
        next = a + b + c;
        a = b;
        b = c;
        c = next;
        i++;
    }
    return c;
};

int main() {
    int n;
    cin >> n;
    cout << tribonacci (n);
}