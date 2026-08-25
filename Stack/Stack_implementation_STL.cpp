#include <iostream>
#include <stack>
using namespace std;

// printing the stack
void print(stack<int>s){
   stack<int>p;
    while (!s.empty()){
        int t = s.top();
        p.push(t);
        s.pop();
    }
    while (!p.empty()){
        int t = p.top();
        cout << t << "  ";
        p.pop();
    }
}

void print2(stack<int>p){
    while (!p.empty()){
        int t = p.top();
        cout << t << "  ";
        p.pop();
    }
}




int main (){

    // Here a we are declaring a stack with integer datastructure of name Num
    stack<int>num ;

    //In Built Operations of stack

    cout << "Checking stack is empty : "<<num.empty() << endl;
    cout << "Finding the size of stack : "<<num.size() << endl;

    //Inserting the elements into stack
    num.push(5);
    num.push(10);
    num.push(8);
    num.push(7);
    num.push(3);

    cout << "Top/Peek of the stack : " <<num.top() << endl;
    cout << "Size of stack after insertion : " << num.size() << endl;

    // We are printing the elements of stack from bottom to top  
    cout << "printing the elements of stack from bottom to top : " ;
    print(num);
    cout << endl;
    cout << "printing the elements of stack from top to bottom  : " ;
    // We are printing the elements of stack from top to bottom   
    print2(num);
    
    cout << "\nTop/Peek of the stack : " <<num.top() << endl;
    // Now we are removing the elements
    num.pop();
    cout << "Top/Peek of the stack : " <<num.top() << endl;
    num.pop();
    cout << "Top/Peek of the stack : " <<num.top() << endl;
    num.pop();


}

