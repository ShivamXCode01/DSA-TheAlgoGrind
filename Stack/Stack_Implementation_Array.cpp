#include <iostream>
using namespace std;

// Defining a class for stack

class Stack{
    //properties of stack
    public:
        int *arr;
        int top ;
        int size ;
    
    // Constructor
    Stack(int size){
        this -> size = size ;
        arr = new int[size];
        top = -1;
    }

    void push(int d){
        if (size - top > 1){
            top ++;
            arr[top] = d;
        }
        else{
            cout << "stack is overflow";
        }
    }

    void pop(){
        if (top >= 0){
            top--;
        }
        else{
            cout << "Stack is underflow";
        }
    }

    void empty(){
        if (top == -1){
            cout <<" stack is empty";
        }
        else{
            cout << "stack is not empty";
        }
    }

    void peek(){
        if (top >= 0){
        cout <<"Top/peek of the stack is : " << arr[top];
       }
       else{
        cout << " Stack is empty.";
       }
}


};



int main (){

    // we are creating the object of the Stack class  and declaring the size of stack
    Stack s(5);
    //s.top();
    
    s.push(5);
    s.push(4);
    s.pop();

}