#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;

    }
};

void print( Node * &head) {
    while(head != NULL)
    {
        cout << head -> data <<" ";
        head = head -> next;
    }
}

int main() {
    Node *head = new Node(3);
    head -> next = new Node(4);
    head -> next -> next = new Node(5);
    head -> next -> next -> next = new Node(6);

    print(head);
}