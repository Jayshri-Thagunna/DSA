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

    bool isempty() {
        return top == -1;
    }

    bool isfull() {
        return top >= size - 1;
    }

    void push(int data) {
        if(isfull()){
            cout << "Overflow\n";
            return;
        }
        arr[++top] = data;
    }

    int pop() {
        if(isempty()){
            cout << "Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    void display() {
        for(int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }

    void insertAtBottom(int value) {
        if(isempty()) {
            push(value);
            return;
        }

        int temp = pop();
        insertAtBottom(value);
        push(temp);
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

    S.insertAtBottom(10);

    cout << "After Inserting at Bottom: ";
    S.display();

    return 0;
}

}
