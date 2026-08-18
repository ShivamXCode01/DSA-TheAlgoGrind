# include <iostream>
# include <stack>
using namespace std;


int main(){

    // stack is a data Structure that follow LIFO principal mens last in first out

    stack<string>s;

    s.push("Shivam");
    s.push("shourav");
    s.push("Rishi");
    s.push("Aman");

    cout <<"Top elements:-" << s.top() << endl;

    cout << "Size of the stack :-" << s.size() << endl ;

    cout <<"Removing first elements of stack:";
    s.pop();
    cout << endl ;

    cout <<"Checking stack is empty or not:" << s.empty();



   



}