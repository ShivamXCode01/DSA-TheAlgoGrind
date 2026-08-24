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

// Remove Duplicates in Unsorted LL






int main(){
    Node * node1 = new Node(1);
    Node * head = node1;

    cout << "Initail LL is 5 \n";

    insertAtTail(head,3);
    print(head);

    insertAtTail(head,4);
    print(head);


    insertAtTail(head,4);
    print(head);

    insertAtTail(head,5);
    print(head);

    insertAtTail(head,6);
    print(head);

    insertAtTail(head,6);
    print(head);

    // Node * result = removeDuplicate(head);
    cout << "Printing LL after removing Duplicates :- ";
    // print(result);
    

    

}