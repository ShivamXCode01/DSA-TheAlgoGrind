/*8. Swap Two Variables
Store two values in variables and swap their values using a third variable.*/
#include<iostream>
using namespace std;
int main(){

    int a,b,temp;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b: ";
    cin>>b;

   temp=a;
   a=b;
   b=temp;

   cout<<"After Swapping:";
   cout<<"a = " <<a <<endl;
   cout<<"b= "<<b <<endl;


}