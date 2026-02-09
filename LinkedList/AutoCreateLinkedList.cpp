#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }

};

void InsertAtStart(Node * &head, int data) {
    Node *nodetoinsert = new Node(data);
    nodetoinsert -> next = head;
    head = nodetoinsert;
};

void InsertAtEnd(Node * &head, int data) {
    Node * newNode = new Node(data);
    Node * temp = head;

    while (temp -> next != NULL) {
        temp = temp -> next;
    }
    temp -> next = newNode;
};

void print(Node * &head) {
    while (head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
}

int main() {
    Node *head = new Node(0);

   // InsertAtEnd(head, 10);

    for(int i = 1; i <= 10; i++){
        InsertAtEnd(head, i);
    }

    print(head);
}