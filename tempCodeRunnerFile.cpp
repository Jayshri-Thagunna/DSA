#include<iostream>
#include<stack>
using namespace std;


int main(){
	string str="((()))";
	stack<char> s;
	int i;
	for(i=0;i<str.length();i++){
		if(str[i]=='('){
		s.push(str[i]);
	}
	else if(s.empty()){
		cout<<"invalid:";
	break;
	}
	else {
		s.pop();
	}
	
}
if(s.empty()!=0){
	cout<<"valid:";
}
else{
	cout<<"not valid:";
}
}