#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *prev;
        Node *next;

    Node(int data) {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void print(Node * &rootnode) {
    if(rootnode == NULL) {
        return;
    }

    Node *temp = rootnode;
    while(temp != NULL) {
        cout << temp -> data <<"-> ";
        temp = temp -> next;
    }

};

int main() {
   Node *node1 = new Node(22);
   Node *node2 = new Node(24);
   Node *node3 = new Node(25);

   node1 -> next = node2;
   node2 -> prev = node1;

   node2 -> next = node3;
   node3 -> prev = node2;

   print(node1);

}