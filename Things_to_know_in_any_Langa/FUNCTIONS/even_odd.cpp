/*2. Check Even or Odd (Easy)
Write a function bool isEven(int n) that returns true 
if the number is even, else false*/

#include<iostream>
using namespace std;

bool isEven(int a ){
    if(a&1){
        return 0;
    }
    else {
        return 1;
    }
}

    int main() {
         int n ;
        cout<< "Enter a number :";
        cin>> n ;
       if (isEven( n )){
        cout<<"Number is even.";
       }
       else {
        cout<< "Number is odd.";

       }

       return 0 ;

    }

