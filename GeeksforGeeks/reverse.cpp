#include<iostream>
#include<stack>
using namespace std;

class Solution {
  public:
    void insertatBottom(stack<int>&st, int x) {
        if(st.empty()) {
            st.push(x);
            return ;
        }
        int top = st.top();
        st.pop();
        
        insertatBottom(st, x);
        st.push(top);
    }

    void reverseStack(stack<int> &st) {
        // code here
        if(st.empty()){
            return;
        }
        int top = st.top();
        st.pop();
        reverseStack(st);
        insertatBottom(st, top);
    }
};

int main() {
    stack<int>st;

    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    Solution obj;
    obj.reverseStack(st);

    cout << "Reversed Stack:\n";

    // print stack
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}