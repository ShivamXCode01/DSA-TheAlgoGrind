// Circular Linked List
#include <iostream>
using namespace std;

//Node Class 
class Node {
    public:
    int data;
    Node * next;

    //Constructor
    Node(int d){
        this -> data = d ;
      this-> next = NULL;
    }
};

// insertion of data at any position 
void insertAtPosition(Node*&tail,int element,int d){
    

    // For empty linked list
    if (tail == NULL ){
        Node*temp = new Node(d);
        tail = temp ;
        temp -> next = temp;
    }
    else{
        Node *curr = tail;
        while (curr -> data != element){
            curr = curr -> next;
        }
        Node *temp = new Node(d);
        temp -> next = curr -> next;
        curr -> next = temp;
    }
}

// Delete of node 
void deleteAtPosition(Node*& tail, int element) {

    // Empty LL
    if (tail == NULL) {
        cout << "LL is empty";
        return;
    }

    Node* prev = tail;
    Node* curr = tail->next;

    // Find element
    while (curr->data != element) {

        prev = curr;
        curr = curr->next;

        // Element not found
        if (curr == tail->next) {
            cout << "Element not found";
            return;
        }
    }

    // Only one node
    if (curr == tail && curr->next == tail) {
        tail = NULL;
        delete curr;
        return;
    }

    // If deleting tail
    if (curr == tail) {
        tail = prev;
    }

    // Remove curr
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

// printing of nodes 
void Print(Node* tail){
    Node*temp = tail;
    
    // for empty Linked List 
    if (tail == NULL){
        cout << "LL is empty";
    }
    else{
        while (tail -> next != temp){
            cout << tail -> data << " ";
            tail = tail -> next ;
        }
        
    }

    // Another way to print 
    // do {
    //     cout << tail -> data << " ";
    //     tail = tail -> next;
    // }while (tail != temp);

    cout << endl ;
}


int main(){

    // object Creaction
    Node* node1 = new Node(6);
    Node *tail = node1;
    node1 -> next = tail;

    Print(tail);
    insertAtPosition(tail,6,50);
    

    Print(tail);
    insertAtPosition(tail,50,65);
    

    Print(tail);
    insertAtPosition(tail,65,55);
    

    Print(tail);
    insertAtPosition(tail,55,43);
    

    Print(tail);
    insertAtPosition(tail,43,20);

    cout << "Deleting the node " << endl;

    
    deleteAtPosition(tail,6);
    Print(tail);
    



}