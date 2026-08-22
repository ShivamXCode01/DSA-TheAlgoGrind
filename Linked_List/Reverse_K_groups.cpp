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

Node * KGroupsreverseLL(Node*&head,int k){
    if (head == NULL){
        return NULL;
    }
    Node * next = NULL;
    Node * prev = NULL;
    Node * curr = head;
    int cnt = 0;
    
    while (curr != NULL && cnt < k){
        next = curr -> next;
        curr-> next = prev ;
        prev = curr;
        curr = next ;
        cnt ++;

    }
        if (next != NULL){
            head -> next = KGroupsreverseLL(next,k);
        }

    
    return prev;


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

    int n;
    cout <<"Enter your size of group we want to reverse : ";
    cin >> n ;
    cout << "Reversing the LL in k groups :- " ;
    Node * result = KGroupsreverseLL(head,n);
    print(result);

    

}