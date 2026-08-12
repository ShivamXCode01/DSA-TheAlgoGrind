/*Positive, Negative, or Zero
Input an integer. Print whether it’s positive, negative, or zero.*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter your number: ";
    cin>>a;
    if(a>0){
    cout<<"Your number is positive.";
    }
    else if(a<0){
        cout<<"your number is negative.";
    }
    else{
        cout<<"Your number is zero.";
    }
}