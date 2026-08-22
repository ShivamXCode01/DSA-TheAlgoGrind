#include <iostream>
using namespace std;

// Creating Node class

class Node{
    public:
    int data ;
    Node * next;

    // Constructor 

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

// insert tail

void insertAtTail(Node*&head,int d){
    Node * newNode = new Node(d);
    // Empty LL handled
    if (head == NULL){
       head = newNode ; 
    }

    // Non Empty LL
    Node*temp = head;
    while (temp->next != NULL){
        temp = temp -> next;
    };
    temp -> next = newNode;
    cout << d <<" Inserted Successfully! :-  ";

    
}

// traversal of LL

void print(Node *&head){
    Node * temp = head;
    
    while (temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// Reversing the LL

void reverseLL(Node*&head){
    Node * temp = head;
    Node * prev = NULL;

    while (temp != NULL){
        Node * updated = temp -> next;
        temp -> next = prev;
        prev= temp;
        temp = updated;

    }
    head = prev;
    print(head);

}



int main(){
    Node * node1 = new Node(5);
    Node * head = node1;

    cout << "Initail LL is 5 \n";

    insertAtTail(head,99);
    print(head);

    insertAtTail(head,54);
    print(head);


    insertAtTail(head,23);
    print(head);

    insertAtTail(head,12);
    print(head);

    insertAtTail(head,43);
    print(head);

    insertAtTail(head,91);
    print(head);

    cout << "Reversing the LL :- " ;
    reverseLL(head);

    

}