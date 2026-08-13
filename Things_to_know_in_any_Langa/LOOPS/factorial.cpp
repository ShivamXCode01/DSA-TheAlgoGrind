/*Factorial of a number
Input N, find N! using a loop.*/
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<< "Enter N: " ;
    cin>> n;

    // Using While loop
/*  int i = 1;
     int f =1;
    while (i<=n){
        
        f= f * i ;
        i = i + 1;
       
    }
     cout<< f<< endl;   */

     // using for loop 
     int f = 1;
     for( int i = 1 ; i <=  n ; i= i + 1) {
        
     f = f * i ;
     }
     cout << f << endl;
}