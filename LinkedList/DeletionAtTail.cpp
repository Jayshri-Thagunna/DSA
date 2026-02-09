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

void InsertAtEnd(Node * &head, int data) {
    Node * newNode = new Node(data);
    Node * temp = head;

    while (temp -> next != NULL) {
        temp = temp -> next;
    }
    temp -> next = newNode;
};

void DeletionAtTail(Node * &head) {
    //Base Case
    if(head == nullptr) {
        return;
    }

    Node * temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    delete temp -> next;
    temp->next = NULL;
};

void print(Node * &head) {
    while(head != NULL) {
        cout << head -> data <<" ";
        head = head -> next;
    }
}

int main() {
    Node * head = new Node (21);

    for(int i = 22; i <= 30; i++) {
        InsertAtEnd(head, i);
    }

    DeletionAtTail(head);
    print(head);
}