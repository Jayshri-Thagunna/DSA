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

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp -> data << " <-> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node *head = new Node(3);
    head -> next = new Node(4);
    head -> next -> next = new Node(5);
    head -> next -> next -> next = new Node(6);

    display(head);
    

}