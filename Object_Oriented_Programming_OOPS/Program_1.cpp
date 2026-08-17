// Object-Oriented Programming (OOP) is a programming method where programs are built using objects that contain data and functions together.
#include <iostream>
using namespace std;

class Human{
    public:
    string name ="John Doe";
    int age = 43;
};

int main(){
    // Creating the object for class 
    //M-1
    Human h;
    cout <<h.name << endl;
    cout << h.age <<endl;

    // M-2
    Human * h2 = new Human();
    cout << h2 ->name << endl;
    cout << h2 ->age << endl;

}