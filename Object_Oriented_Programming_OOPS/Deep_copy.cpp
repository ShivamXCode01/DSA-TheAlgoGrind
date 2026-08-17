// Deep Copy :- in this approach we only pass the value not the reference means not the address so changes occurs only one (independent)

#include <iostream>
using namespace std;

class Boy {
public:
    int* height;
    int weight;

    Boy(int h, int w) {
        height = new int(h);
        weight = w;
    }

    // Deep Copy Constructor
    Boy(const Boy &obj) {
        height = new int(*obj.height);  // new memory
        weight = obj.weight;
    }

    void call() {
        cout << "Height: " << *height << " Weight: " << weight << endl;
    }
};

int main() {
    Boy b1(6, 65);
    Boy b2 = b1;  // deep copy

    *b2.height = 10;  // change b2 only

    b1.call();  // remains same
    b2.call();
}
