#include <iostream>

using namespace std;

// snode, dnode, sdisp, ddisp, shead, dhead
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> next = NULL;
    }
};

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data) {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
};

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp -> data << " <-> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtHead(Node* &head, int d) {
    Node* temp = new Node(d);
    if (head != NULL) {
        head -> prev = temp;
    }
    temp -> next = head;
    head = temp;
}