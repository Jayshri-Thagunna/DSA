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

void push(int data) {
    if(isfull()){
        cout << "Stack Overflow";
        return ;
    }

    cout << data <<" has been inserted in stack" << endl;
    arr[++top] = data;
}

};

int main() {
    Stack S(5);

    S.push(5);
    S.push(10);
    S.push(14);
    S.push(19);
    S.push(23);

    return 0;

}