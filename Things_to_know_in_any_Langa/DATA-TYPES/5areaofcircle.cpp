/*Circle Area and Circumference
Take the radius as a variable, store it as a float, and 
calculate area and circumference using π = 3.14.*/
#include<iostream>
using namespace std;
int main(){
    float r;
    cout<<"Enter radius: ";
    cin>>r;
    float A=3.14*r*r;
    cout<<"Area of cirle: "<<A;
    cout<<endl;
    float C=2*3.14*r;
    cout<<"Circumference of circle:"<<C;


}