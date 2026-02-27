#include<iostream>
using namespace std;

class Stack {
    public:
        int size;
        int top;
        int *arr;

    Stack(int size){
        this -> size = size;
        top = -1;
        arr = new int[size];
    }

    bool isfull() {
    return top >= size -1;
    }

    bool isempty() {
        return top == -1;
    }

void push(int data) {
    if(isfull()){
        cout << "Stack Overflow" <<endl;
        return ;
    }
    arr[++top] = data;
    cout << data <<" has been inserted in stack" << endl;
    arr[++top] = data;
}

int pop() {
        if(isempty()) {
            cout << "Stack Underflow" << endl;
            return -1;   

        int value = arr[top--];
        cout << value << " has been removed from stack" << endl;
        return value;
        }
    }
};

int main() {
    Stack S(5);

    S.push(5);
    S.push(10);
    S.push(14);
    S.push(19);
    S.push(23);


    S.pop();
    S.pop();

    return 0;

}