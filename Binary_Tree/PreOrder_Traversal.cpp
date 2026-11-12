#include <iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node*left;
        node *right ;
        
    node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;

    }
};

node* buildTree(node*root){
    cout << " Enter the Data  : ";
    int data ;
    cin >> data ;

    root = new node(data);

    if (data == -1){
        return NULL;
    }
    root = new node(data);
    
    cout << " for left node  \n";
    root -> left = buildTree(root->left);
    
    cout << "for right node  \n" ;
    root -> right = buildTree(root -> right );
    
    

    return root ;
}

void preOrderTraversal(node * root){

    if (root == NULL){
        return ;
    }


    cout << root -> data << "  ";
    preOrderTraversal(root -> left);
    preOrderTraversal(root -> right);
}

int main (){

    node * root = NULL;
    root = buildTree(root);

    preOrderTraversal(root);
   

    return 0 ; 
}
