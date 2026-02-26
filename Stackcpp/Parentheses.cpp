#include<iostream>
#include<stack>
using namespace std;


int main() {
	string str="";
	stack<char> s;

	if(str.length() == 0) {
        cout << "empty input" << endl;
        return 0;
    }

	for(int i = 0; i < str.length(); i++){
		if(str[i] == '(') {
		s.push(str[i]);
	}
	else if(str[i] == ')') {
		if(s.empty()) {
		cout <<"invalid:";
		return 0;
	}

	s.pop();

	}
}

//After this only way of valid is the stack is empty
if(s.empty()) {
	cout <<"valid:";
	}
else{
	cout <<"not valid:";
	}
};