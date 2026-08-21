// Doubly Linked List :- Deletion at Differet Postions 

#include <iostream>
using namespace std;

class Node {
    public :
    int data ;
    Node * prev ;
    Node * next ;

    // Constructor 
    Node(int data){
        this -> data = data ;
        this -> prev = NULL;
        this -> next = NULL;
    }

};

// printing/ Traversal  of the linkded List 
void print(Node*&head){
    Node* temp = head;
    while (temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl ;
} 

// Function for insert at the head 
void insertAtHead(Node* &head,int d ){
    Node * temp = new Node (d);
    temp -> next = head ;
    head ->prev = temp ;
    head = temp ;
}

// function to delete a node from anywhere 
void deleteAtPosition(Node*& tail, Node*& head, int position) {

    // Delete at head
    if (position == 1) {
        Node* temp = head;

        head = head->next;

        if (head != NULL) {
            head->prev = NULL;
        }
        else {
            // List became empty
            tail = NULL;
        }

        delete temp;
    }

    else {
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;

        while (cnt < position) {
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        prev->next = curr->next;

        if (curr->next != NULL) {
            curr->next->prev = prev;
        }

        // If deleting the last node
        if (curr == tail) {
            tail = prev;
        }

        delete curr;
    }
}


int main (){

    // Creating of object of node class 
    Node * node1 = new Node (7);
    Node *head = node1;
    Node *tail = node1;

    print(head);

    insertAtHead(head,45);
    print(head);

    insertAtHead(head,45);
    print(head);

    insertAtHead(head,18);
    print(head);

    insertAtHead(head,32);
    print(head);

    insertAtHead(head,1);
    print(head);

    deleteAtPosition(tail,head , 1);
    print(head);

    deleteAtPosition(tail,head,6);
    print(head);

    deleteAtPosition(tail,head,4);
    print(head);


    
}