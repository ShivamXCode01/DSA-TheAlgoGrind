/* 3. Average of Three Numbers
Take three floating-point numbers as input, store them in variables, 
calculate their average, and print it.*/
#include<iostream>
using namespace std;
int main(){
    float a,b,c;  //if you want to take float value then replace int by float
    
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter the value of b:  ";
    cin>>b;
    cout<<endl;
    cout<<"Enter the value of c: ";
    cin>>c;
   float average =(a+b+c)/3;
    cout<<"Average of three numbers are:  " <<average<<endl;

}
