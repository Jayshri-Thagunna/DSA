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

void InsertAtHead (Node * &head, int data) {
    Node *nodetoinsert = new Node(data);
    nodetoinsert -> next = head;
    head = nodetoinsert;
};

void print(Node * &head) {
    while (head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
};

int main() {
    Node *head = new Node(21);
    head -> next = new Node(22);
    head -> next -> next = new Node(23);
    head -> next -> next -> next = new Node(24);

    InsertAtHead(head, 50);
    print(head);

}