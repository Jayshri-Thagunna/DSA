#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;
        Node (int data) {
            this ->data = data;
            this ->next = NULL;
        }
};

void print (Node * &first) {
     while (first != NULL) {
        cout << first->data <<" ";
        first = first ->next;
    }
}

int main() {

    Node * first = new Node(56);
    Node * second = new Node(15);
    Node * third = new Node(20);
    Node * fourth = new Node(11);
    Node * fifth = new Node(34);


    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;

    print(first);

}