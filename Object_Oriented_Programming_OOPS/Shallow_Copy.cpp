// Shallow copy :- in this approach we pass the reference of the object and data so the changes occurs on both(dependent)


#include <iostream>
using namespace std;

class Boy {
public:
    int* height;
    int weight;

    Boy(int h, int w) {
        height = new int(h);  // dynamic memory
        weight = w;
    }

    // Shallow Copy (default copy constructor)
    Boy(const Boy &obj) {
        height = obj.height;   // same address (shared)
        weight = obj.weight;
    }

    void call() {
        cout << "Height: " << *height << " Weight: " << weight << endl;
    }
};

int main() {
    Boy b1(6, 65);
    Boy b2 = b1;  // shallow copy

    *b2.height = 10;  // change via b2

    b1.call();  // also changed (problem!)
    b2.call();
}