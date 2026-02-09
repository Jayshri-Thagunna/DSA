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

void print(Node * &head) {
    while (head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
}

void DeleteAtHead(Node * &head) {
    Node *temp = head;
    head = head -> next;
    delete temp;
}

int main() {
    Node *head = new Node(0);

    for(int i = 1; i <= 10; i++){
        InsertAtEnd(head, i);
    }

    DeleteAtHead(head);
    print(head);
}