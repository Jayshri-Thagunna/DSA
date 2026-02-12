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
        cout << temp -> data << " <-> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
};

void shortl(Node * head) {
    for(Node *i=head; i!=NULL; i=i->next){
        for(Node *j=i->next; j!=NULL; j=j->next){
            if(i->data > j->data){
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
};

int main() {
    Node *head = new Node(9);
    head -> next = new Node(4);
    head -> next -> next = new Node(2);
    head -> next -> next -> next = new Node(6);

    cout <<"Befor Shorting: "<<endl;
    display(head);

    shortl(head);
    
    cout <<"After Shorting: "<<endl;
    display(head);

}