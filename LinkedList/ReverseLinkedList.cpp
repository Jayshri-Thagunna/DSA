#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this -> data = data;
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

void Reverse(Node * &head) {
    Node * prev = NULL;
    Node * curr = head;
    Node * next = NULL;

    while(curr != NULL) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
}

int main() {
    Node *head = new Node(30);
    head -> next = new Node(35);
    head -> next -> next = new Node(40);
    head -> next -> next -> next = new Node(50);
    head -> next -> next -> next -> next = new Node(55);

    display(head);
    Reverse(head);
    display(head);

}