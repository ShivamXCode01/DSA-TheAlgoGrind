// Singly Linked List :- Deletion at Differet Postions 
#include <iostream>
using namespace std;

class Node {
    public :
    int data ;
    Node * next ;

    // Constructor 
    Node(int data){
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

// Function for insert at the head 
void insertAtHead(Node* &head,int d){
    Node * temp = new Node(d);

    temp -> next = head ;
    head = temp ;

}

// function to delete a node from anywhere 
void deleteAtPosition(Node *&head,int position){

    // Deleting at the begining (Head)
    if (position == 1){
        Node* temp = head;
        head = head ->next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node * curr = head ;
        Node * prev = NULL ;
    

    // Delete at any position 
    int cnt = 1 ;
    while (cnt < position){
        prev = curr ;
        curr = curr -> next;
        cnt ++;
    }
    prev -> next = curr -> next;
    curr ->next  = NULL ;
    delete curr;
}
}


int main (){

    // Creating of object of node class 
    Node * node1 = new Node (7);
    Node *head = node1;

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

    deleteAtPosition(head,3);
    print(head);

    deleteAtPosition(head,5);
    print(head);
    deleteAtPosition(head,1);
    print(head);
}