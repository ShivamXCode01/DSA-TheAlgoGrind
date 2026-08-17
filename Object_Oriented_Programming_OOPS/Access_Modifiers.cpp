// Access Modifier :- it tells that which data members and methods are used by where or which class or methods 

//There are three types of access modifier in c++
//1. Public :- it is used everywhere
//2.Private :- it is used only within the class
//3. Protected :- it is not used by outside class but it is used by the child class that inherites from this class 

# include <iostream>
using namespace std;

class A{
    public :
    string name = "Marvel";
    private:
    int age = 26;
};

int main(){
    A obj1;
    cout <<"You are accessing public Data memeber: " << obj1.name << endl;
    //cout <<"You are accessing private Data memeber:" <<obj1.age << endl; // we cant access this private metthod

}