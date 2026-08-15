// Pointer is the way to storing the address of the variable(Data).
# include <iostream>
using namespace std;

int main(){

    int num = 5;

    int *ptr = &num; // here we storing the address of num in ptr (* is called de-reference operator)

    cout <<"Address of num:"<< ptr << endl; // it gives the address of num variable 
    cout << "Value of num:" << *ptr << endl; // it is used to print the value of variable

    // we are changing the value of variable using its pointer variable
    *ptr = *ptr + 1;
    cout << "Incremenent:" << *ptr << endl;
    *ptr = *ptr - 4;
    cout << "Decrement :" << *ptr;

    // changing the address 
    // in this condition address changes 4 byte in int condition and different for other datatypes
    ptr ++;
    cout<<"changed address:"<<ptr << endl;

    // printing the size of pointer

    cout << "Size of pointer :" <<sizeof(ptr) <<endl;

    int *ptr2 = 0 ;
    int n = 3;
    ptr2 = &n;
    cout << ptr2 <<endl <<*ptr2 <<endl;

}