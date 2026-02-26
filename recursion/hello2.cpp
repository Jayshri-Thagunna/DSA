#include<iostream>
using namespace std;

void print(int n){

    cout << "Hello: ";
    //Base Case
    if(n==1){
        return ;
    }
    
    print(--n);
    cout << "Hello: ";
}

int main() {
    print(5);
}