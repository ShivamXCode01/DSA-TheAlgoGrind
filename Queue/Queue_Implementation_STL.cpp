// Queue is a type of data structure that follow FIFO (first in first out ) rule 
#include <iostream>
#include <queue>
using namespace std ;


// Function to print the Queue
void print(queue<int>q){
    int n = q.size();
    cout << "We are printing the values of queue after deletion : " ;
    for (int i = 0 ; i < n ; i++){
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;


}

int main (){

    // Queue inititalization 
    queue<int>q;   // interger type queue

    // Inserting the values in the queue
    q.push(5);
    q.push(54);
    q.push(2);
    q.push(3);

    cout << "Size of the Queue is : " << q.size() << endl;
    print(q);
    
    cout  << "Front element of queue is : " << q.front() << endl;
    cout << "Rear element of the queue is : "<< q.back() << endl;


    // Deleting the elements from the Queue
    q.pop();
    print(q);
    
    q.pop();
    print(q);
    
    q.pop();
    print(q);

    cout << "Size of the Queue after deletion is : " << q.size();

    if (q.empty()){
        cout << "\nQueue is empty.\n";
    }
    else {
        cout << "\nQueue is not empty.\n";
    }

    cout  << "Front element of queue is : " << q.front() << endl;

    cout << "Rear element of the queue is : "<< q.back() << endl;

    return 0 ;
}