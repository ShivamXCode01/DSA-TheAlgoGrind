// A destructor is a special member function that works just opposite to a constructor; unlike constructors that are used for
// initializing an object, destructors destroy (or delete) the object.

# include <iostream>
using namespace std;

class A {
    public:
    int weight;

    A(){
        weight = 89;
    }
    // it is destructor 
    ~A(){
        cout <<"Destructor is called.";
    }

};


int main(){

    A obj ;
    cout << obj.weight << endl;

}