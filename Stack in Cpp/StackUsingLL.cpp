#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Stack {
    Node* head;

public:
    Stack() {
        head = NULL;
    }

    void push(int x) {
        Node* newNode = new Node();
        newNode->data = x;
        newNode->next = head;
        head = newNode;
    }

    void pop() {
        if(head == NULL) {
            cout << "Stack Underflow\n";
        }
        else {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void peek() {
        if(head == NULL) {
            cout << "Stack is Empty\n";
        }
        else {
            cout << "Top element = " << head->data << endl;
        }
    }

    void display() {
        if(head == NULL) {
            cout << "Stack is Empty\n";
        }
        else {
            Node* temp = head;
            while(temp != NULL) {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }
};

int main() {
    Stack s;

    s.display();

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    s.pop();
    s.display();

    return 0;
}
