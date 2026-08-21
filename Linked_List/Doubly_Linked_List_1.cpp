// Doubly Linked List :- Insertion at Differet Postions 

#include <iostream>
using namespace std ;

// Creating node class 
class Node {
    public :
    int d ;
    Node *prev;
    Node* next ;
    
    // Constructor 
    Node (int d){
        this -> d = d;
        this -> prev = NULL;
        this -> next = NULL;
        
    }
};

// Print Function 
void print(Node* &head){
    Node *temp = head ;

    while(temp != NULL){
        cout << temp->d << " ";
        temp = temp -> next;
    }
    cout << endl;
}


// Insert at Head

void insertAtHead(Node* &head,int d ){
    Node * temp = new Node (d);

    temp -> next = head ;
    head ->prev = temp ;
    head = temp ;
}

// Insert at Tail;
void insertAtTail(Node* &tail,int d ){
    Node * temp = new Node (d);

    temp -> prev = tail ;
    tail -> next = temp ;
    tail = temp ;   
}

// Insert at Any position 

void insertAtPosition (Node * &head,Node* &tail,int pos ,int d){
    // Start 
    if (pos == 1){
        insertAtHead(head,d);
        return ;
    }

    Node * temp = head;
    int cnt = 1 ;

    while (cnt < pos - 1){
        temp = temp -> next ;
        cnt ++;
    }

    // Last 
    if (temp -> next == NULL){
        insertAtTail(tail , d );
        return ;
    }

    // Insert at any position 
    Node * node = new Node (d);
    node -> next = temp -> next ;
    temp -> next -> prev = node ;
    temp -> next = node ;
    node -> prev = temp ;
}



int main (){
    Node * node1 = new Node (7);
    Node *head = node1;
    Node *tail = node1 ;

    print(head);

    insertAtHead(head , 76);
    print(head);

    insertAtTail(tail , 89);
    print(head);

    insertAtTail(tail , 54);
    print(head);

    insertAtPosition(head,tail,3,88);
    print(head);

    insertAtPosition(head,tail,1,8);
    print(head);

    insertAtPosition(head,tail,7,80);
    print(head);
    

}