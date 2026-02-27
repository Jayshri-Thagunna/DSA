#include<iostream>
#include<stack>
using namespace std;


class Solution {
  public:
  
  void helper(stack<int>&st, int x) {
      if(st.empty()){
          st.push(x);
          return;
      }
      int top = st.top();
      st.pop();
      helper(st , x);
      st.push(top);
  }
    stack<int> insertAtBottom(stack<int> st, int x) {
        helper(st, x);
        return st;
    }
};

int main() {
    stack<int>st;

    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);

    int x = 8;   // element to insert at bottom

    Solution obj;
    st = obj.insertAtBottom(st, x);

    // print stack
    cout << "Stack after inserting at bottom:\n";
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}