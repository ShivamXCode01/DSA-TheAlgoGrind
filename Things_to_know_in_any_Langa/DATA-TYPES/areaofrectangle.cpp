/*Rectangle Area and Perimeter
Declare variables for length and width, assign values, and calculate area and perimeter.*/
#include<iostream>
using namespace std;
int main(){
    int l,b;
    cout<<"Enter the value of length: ";
    cin>>l;
    cout<<"Enter the value of breadth: ";
    cin>>b;
    int area=l*b;
    cout<<"Area of rectangle:  " <<area ;
    cout<<endl;
    int P=2*(l+b);
    cout<<"Perimeter of rectangle: "<<P;


}