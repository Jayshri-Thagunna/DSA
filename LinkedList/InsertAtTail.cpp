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

void InsertAtTail(Node * &head, int data) {
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
};

int main() {
    Node *head = new Node(68);
    head -> next = new Node(69);
    head -> next -> next = new Node(70);
    head -> next -> next -> next = new Node(80);

    InsertAtTail(head, 11);
    print(head);
}