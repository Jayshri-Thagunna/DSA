#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next = NULL;

        Node(int data) {
            this -> data = data;
            this -> next = next;
        }
};

void InsertAtTail(Node * &head, int data) {
    Node *valuetoinsert = new Node(data);
    Node * temp = head;

    while (temp -> next != NULL) {
        temp = temp -> next;
    }
    temp -> next = valuetoinsert;
};

void DeleteAtMiddle (Node * &head) {
    if(head == nullptr) {
        return;
    }

    Node *slow = head;
    Node *fast = head;
    Node *prev = NULL;

    while (fast != NULL && fast -> next != NULL) {
        prev = slow;
        slow = slow -> next;
        fast = fast -> next -> next;
    }

    prev -> next = slow->next;

    delete slow;

};

void print(Node * &head) {
    while(head != nullptr) {
        cout << head -> data <<" ";
        head = head -> next;
    }
}

int main() {
    Node *head = new Node(3);

    for (int i = 4; i<= 12; i++) {
        InsertAtTail(head, i);
    }

    DeleteAtMiddle(head);
    print(head);

}