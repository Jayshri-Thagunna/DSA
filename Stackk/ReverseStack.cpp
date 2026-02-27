#include<iostream>
using namespace std;

class Stack {
public:
    int size;
    int top;
    int *arr;

    Stack(int size){
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    bool isfull() {
        return top >= size - 1;
    }

    bool isempty() {
        return top == -1;
    }

    void push(int data) {
        if(isfull()){
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = data;
    }

    int pop() {
        if(isempty()) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    void display() {
        for(int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack S(5);
    S.push(1);
    S.push(2);
    S.push(3);
    S.push(4);

    cout << "Original Stack: ";
    S.display();

    Stack R(5);

    while(!S.isempty()) {
        R.push(S.pop());
    }

    cout << "Reversed Stack: ";
    R.display();

    return 0;
}
