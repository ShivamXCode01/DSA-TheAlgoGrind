/*3. Factorial of a Number (Easy-Medium)
Write a function long long factorial(int n) that returns 
the factorial of a number*/

#include<iostream>
using namespace std;
// we use int for small , long for big , usigned long long for biggest 
 unsigned long long factorial(int a ){
     int fact = 1 ;
    for(int i = 1 ; i <= a ; i ++){
         fact = fact * i;
    }
        return fact ;

    }
     

  int main(){
    int n ;
    cout<< "Enter n :";
    cin>> n ;
      unsigned long long  fact = factorial(n);
    cout<< "Factorial: "  << fact ;
    return 0;

  }