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

// Finding middle of LL

Node* middleOfLL(Node*&head){
    Node *slow = head;
    Node *fast = head -> next;

    // Handling NULL LL
    if (head == NULL){
        cout << "LL is Empty ";
    }

    // while (fast != NULL){
    //     fast = fast -> next;
    //     if (fast != NULL){
    //         fast = fast -> next;
    //     }
    //     slow = slow -> next;
    // }

    // other more optimised with same logic 

    while (fast != NULL && fast -> next != NULL ){
        slow = slow -> next;
        fast = fast -> next ->next;
    }
    return slow;

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

    Node * result = middleOfLL(head);
    cout << "Middle of LL :- "<< result -> data;

    

}