/*Even or Odd
Input an integer. If it’s divisible by 2 → print “Even”, else print “Odd”.*/
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a%2==0)
    cout<<"Your number is even."<<endl;
    else
    cout<<"Your number is odd."<<endl;
    
}