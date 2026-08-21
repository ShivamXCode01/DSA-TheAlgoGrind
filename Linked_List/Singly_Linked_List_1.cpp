// Singly Linked List :- Insertion at Differet Postions 

#include <iostream>
using namespace std ;

class Node{
    public :
    int data ;
    Node*next;


    // Constructor 
    Node(int data ){
        this -> data = data ;
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


// Insertion of node at start (HEAD)
void insertAtHead(Node* &head,int data){
    Node* temp = new Node (data);
    temp -> next = head ;
    head = temp ;

    cout << "We are adding " << data << " at the beginging of the linked list\n";
}


// Insertion of Node at the end (TAIL)

//Approach one 
void insertAtTail_1(Node *&head,int data){
    Node * node = new Node(data);

    // First method using only head pointer 
    Node *temp = head ;  // We are creating our new temporary node to traverse to the end. 
    while (temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = node ;

    cout << "We are adding at the end of the data \n";
}

// Approach Second 
void insertAtTail_2(Node *&tail,int data){
    Node * temp = new Node(data);

    // Second Approach We are using another variable tail
    tail -> next = temp ; 
    tail = tail->next;
    cout << "We are adding at the end of the data \n";
}


// Insertion of node at any position
// In this function we can handle insert at beginning and insert at end ;

void insertAtAnyPosition(Node *head,int pos,int data){
    Node *temp = head;
    int cnt = 1;
    
    while(cnt < pos-1){
        temp = temp -> next ;
        cnt ++;
    }

    Node * nodeToInsert = new Node (data);
    nodeToInsert -> next=temp -> next  ;
    temp -> next = nodeToInsert;

    cout << "Successfully inserted at "<<pos << endl;

}




int main(){

    // Object creation of the Node class 
    Node * node1 = new Node(8);
    Node *head = node1;
    Node *tail = node1 ;

    insertAtHead(head,20);
    print(head);

    insertAtHead(head,23);
    print(head);

    insertAtHead(head,15);
    print(head);

    insertAtTail_1(head,9);
    print(head);

    insertAtTail_2(tail,12);
    print(head);

    insertAtAnyPosition(head,3,122);
    print(head);

}