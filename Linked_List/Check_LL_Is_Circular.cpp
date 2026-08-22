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

//Circular Checker

bool cirularChecker(Node * head){

    if (head == NULL){
        return true;
    }
    Node * temp = head -> next;

    while(temp != NULL && temp != head){
        temp = temp -> next;
    }
     if (temp == head ){
            return true;
        }
    return false;
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

    if (cirularChecker(tail)){
        cout << "LL is circular";
    }
    else{
        cout << "LL is not circular";
    }
    



}