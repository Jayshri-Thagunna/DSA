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

void print(Node * &head) {
    while(head != NULL) {
        cout << head -> data << " ";
        head = head -> next;
    }
};

void InsertAtMiddle(Node * &head, int value) {
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    Node * data = new Node(value);
    data -> next = slow -> next;
    slow -> next = data;
};

int main() {
    Node *head = new Node(1);
    head -> next = new Node(2);
    head -> next -> next = new Node(3);
    head -> next -> next -> next = new Node(4);
    head -> next -> next -> next -> next = new Node(5);

    InsertAtMiddle(head, 30);
    print (head);
}