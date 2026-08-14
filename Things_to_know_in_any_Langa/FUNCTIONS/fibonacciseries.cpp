/*7. Fibonacci Series (Recursion) (Medium-Hard)
Write a recursive function int fibonacci(int n) 
that returns the nth Fibonacci number.*/

#include<iostream>
using namespace std;

int Fiboseries(int n ){
    int a = 0 ;
    int b = 1 ;
     int sum = 0 ;
    cout << a  << "  "<< b  << " ";

     for ( int i = 2 ; i <= n ; i ++ ){

        sum = a + b ;
        cout << sum << "  " ;
        a = b ;
        b = sum ;
         
     }
      return sum ;
}

 int main (){
    int n ;
    cout<< " Enter your number of series you want : " << endl ;
    cin >> n ;
    cout << "Your series is :" <<   endl ; 
    int P = Fiboseries(n);
    cout << endl ;
    cout << "You nth value of series is :" << P;
    

    return 0;

 }