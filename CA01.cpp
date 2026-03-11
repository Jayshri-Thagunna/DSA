#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int value){
    if(s.empty()){
        s.push(value);
        return;
    }
    int top = s.top();
    s.pop();
    insertAtBottom(s, value);
    s.push(top);
}


void display(stack<int> s){
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int main(){
    stack<int> s;
    s.push(4);
    s.push(5);
    s.push(6);
    display(s);
    insertAtBottom(s, 10);
    cout << "Stack after insertion at bottom: ";
    display(s);
}