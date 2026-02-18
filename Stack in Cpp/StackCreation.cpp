#include<iostream>
using namespace std;

#define MAX 12

int stack[MAX];
int top = -1;

void push(int data) {
    if( top ==  MAX -1) {
        cout << "Stack Overflow" << data << endl;
    } else{
    top = top + 1;
    stack[top] = data;
    }
}

void display() {
    if(top == -1) {
        cout << "Stack is empty" << endl;
    } else {
        for(int i = 0; i <= top; i++) {
            cout << stack[i] <<" ";
        }
        cout<< endl;
    }
}

int main() {

    push(1);
    push(2);
    push(3);
    push(4);
    display();
}