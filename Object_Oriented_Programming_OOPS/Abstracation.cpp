// Abstraction :- it is the way of hiding the complex things (implementation)  only showng them features and simple things .

#include <iostream>
using namespace std;

class abstraction {
private:
    int a, b;

public:
    // method to set values of private members
    void set(int x, int y) {
        a = x;
        b = y;
    }

    void display() {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
    abstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}