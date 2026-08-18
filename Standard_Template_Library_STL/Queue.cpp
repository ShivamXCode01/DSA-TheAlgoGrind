# include <iostream>
# include <queue>
using namespace std;

int main(){

    // Queue is a data Structure that follows FIFO rules means first in first out 

    queue <int> q;

    q.push(2);
    q.push(6);
    q.push(3);
    q.push(43);


    cout <<"Size of queue before pop: " <<q.size() << endl ;
    cout << "First element of queue before pop:" <<q.front() << endl;
    q.pop();
    cout <<"Size of queue after pop: " <<q.size() << endl;
    cout << "First element of queue after pop:" <<q.front() << endl ;

    cout << q.back() << endl; // it gives last element of queue

    cout <<"Empty Checker:"<< q.empty() ;

    // There is many more inbuilt functios we can use
}