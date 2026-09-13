#include <iostream>
using namespace std ;


class myQueue {
private:
    int *arr;
    int front;
    int rear;
    int size;

public:
    myQueue(int n) {
        size = n;
        arr = new int[size];
        front = 0;
        rear = 0;
    }

    bool isEmpty() {
        return front == rear;
    }

    bool isFull() {
        return rear == size;
    }

    void enqueue(int x) {
        if (isFull())
            return;

        arr[rear++] = x;
    }

    void dequeue() {
        if (isEmpty())
            return;

        front++;
    }

    int getFront() {
        if (isEmpty())
            return -1;

        return arr[front];
    }

    int getRear() {
        if (isEmpty())
            return -1;

        return arr[rear - 1];
    }
//     int getRearIndex() {
//     if (isEmpty())
//         return -1;

//     return rear - 1;
// }
};


void print(myQueue q,int n){
    cout << "We are printing the values of queue after deletion : " ;
    for (int i = 0 ; i <= n ; i++){
        cout << q.getFront() << " ";
        q.dequeue();
    }
    cout << endl;


}


int main (){

    myQueue Q(10) ;

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

    cout <<"Front: " << Q.getFront() << endl ;

    cout << "Rear: " << Q.getRear() << endl ;


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