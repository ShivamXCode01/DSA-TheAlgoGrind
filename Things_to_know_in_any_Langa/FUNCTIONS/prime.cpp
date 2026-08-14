/*Check Prime Number (Medium)
Write a function bool isPrime(int n) that checks whether a number is prime.*/

#include<iostream>
#include<math.h>
using namespace std;
// 0 -> Not a Prime no.
// 1 -> Prime no.

bool isPrime(int n ) {
   for(int i = 2; i < sqrt (n); i++){
       if(n % i == 0) {
       //divide hogya h , not a prime no.
          return 0;
        }
   }
   return 1;
}

int main() {
   
   int n ;
   cin >> n;
   if(isPrime(n)) {
        cout <<" is a Prime number " <<endl;
   }
   else{
       cout<< "Not a prime number "<<endl;

   }
   return 0;
}