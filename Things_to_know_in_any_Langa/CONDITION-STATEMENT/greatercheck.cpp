/*Greater of Two Numbers
Input two integers. Print which is greater, or “Equal” if same.*/
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;
    if(a>b){
        cout<<"a is greater than b.";
    }
    else if(a<b){
        cout<<"b is greater than a.";
    }
     else{
        cout<<"a is equal to b.";
     }
}