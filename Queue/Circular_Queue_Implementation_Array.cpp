#include <iostream>
using namespace std ;

class MyCircularQueue {
private:
    int *arr;
    int front ;
    int rear;
    int size;
public:
    MyCircularQueue(int k) {
        size = k ;
        arr = new int[size];
        front = rear = -1 ;
    }
    
    bool enqueue(int value) {
        if(isFull()){
            return false;
        }
        else if (isEmpty()){
            front = rear = 0 ;
        }
        else if (rear == size - 1 && front != 0){
            rear = 0 ;

        }
        else{
            rear++;
            
           
        }
        arr[rear] = value;
        return true ;
    }
    
    bool dequeue() {
        if (isEmpty()){
            return false;
        }
        if (front == rear){
            front = rear = - 1 ;
        }
        else if (front == size -1){
            front = 0 ;                    // it is used to m aintain the circular nature 
        }
        else {
            front ++ ;
        }
        return true;
    }
    
    int Front() {
        if (isEmpty()){
            return -1 ;
        }
        return arr[front];
    }
    
    int Rear() {
        if(isEmpty()){
            return -1 ;
        }
        return arr[rear];
    }
    
    bool isEmpty() {
        if (front==-1){
            return true ;
        }
        else{
            return false ; 
        }
    }
    
    bool isFull() {
        if(front == 0 && rear == size-1){
            return true;
        }
        else if(front == (rear+1)){
            return true;
        }
        else{
            return false;
        }
    }
};

void print(MyCircularQueue q,int n){
    cout << "We are printing the values of queue after deletion : " ;
    for (int i = 0 ; i <= n ; i++){
        cout << q.Front() << " ";
        q.dequeue();
    }
    cout << endl;


}

int main (){
    MyCircularQueue Q(5);


    Q.enqueue(6);
    Q.enqueue(8);
    Q.enqueue(3);
    Q.enqueue(7);
    Q.enqueue(2);

    print(Q,10);

    Q.dequeue();
    print(Q,10);

    Q.enqueue(12);
    print(Q,10);

    cout <<"Front: " << Q.Front() << endl ;

    cout << "Rear: " << Q.Rear() << endl ;


    if (Q.isEmpty()){
        cout << "Queue is empty." ;
    }
    else{
        cout << "Queue is not empty.";
    }

    if (Q.isFull()){
        cout << "\nQueue is full " ;
    }
    else{
        cout << "\nQueue is not full";
    }


    cout << endl ; 
    cout << endl ; 
    cout << endl ; 
    cout << endl ; 

    cout  << "NOTE : -1 Shows that place is empty.";

}