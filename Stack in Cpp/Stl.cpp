#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> s) {
    if(s.empty()) {
        cout << "Stack is empty" << endl;
    } else {
        while(!s.empty()) {
            cout << s.top() << " ";
            s.pop();
        }
        cout<< endl;
    }
}

int main() {
    stack<int>s;

    s.push(56);
    s.push(89);
    s.push(32);

    display(s);

    s.pop();
    display(s);

    cout<<s.top();
    
}
