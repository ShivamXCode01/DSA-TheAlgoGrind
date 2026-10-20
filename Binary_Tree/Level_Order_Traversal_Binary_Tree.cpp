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

void levelOrderTraversal(node*root){

    if (root == NULL)
        return;

    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while (!q.empty()){
        node*temp = q.front();
        q.pop();

        if (temp == NULL){
            cout << endl;
            if (!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp -> data  << "  ";
            if (temp -> left){
                q.push (temp -> left);
            }
            if (temp -> right){
                q.push(temp -> right);
            }
        }
    }
}


int main (){

    node * root = NULL;
    root = buildTree(root);

    levelOrderTraversal(root);

    return 0 ; 
}
