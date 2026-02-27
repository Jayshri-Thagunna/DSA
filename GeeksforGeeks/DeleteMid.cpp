#include<iostream>
#include<stack>
using namespace std;

class Solution {
  public:
    // Function to delete middle element of a stack.
    void helper(stack<int> &s, int size, int count) {
        if(count == size / 2) {
            s.pop();
            return;
        }
        
        int top = s.top();
        s.pop();
        helper(s, size, count+1);
        s.push(top);
    }
    
    void deleteMid(stack<int>& s) {
        // code here..
        int size = s.size();
        helper(s, size, 0);
    }
};

int main() {
    stack<int> s;

    // pushing elements
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    Solution obj;
    obj.deleteMid(s);

    // print stack after deleting middle
    cout << "Stack after deleting middle:\n";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}