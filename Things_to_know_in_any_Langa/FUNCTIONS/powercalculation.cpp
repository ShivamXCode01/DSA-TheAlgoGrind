/*9. Power Calculation using Recursion (Hard)
Write a function double power(double base, int exponent) to calculate 
base^exponent using recursion*/

# include <iostream>
# include <cmath>
using namespace std;

int power(int a , int b ){
   // int p =  round (pow (a , b)) ;  return p;
   int ans = 1 ;
   for ( int i = 1 ; i <= b ; i ++ ){
    ans = a * ans ;
   }
    return ans ;

}

int main (){
    int a , b ;
    cout << "Enter a : ";
    cin>> a ;
    cout << " Enter b : " ;
    cin>> b ; 
    
    int result = power(a,b);
    cout<< "Your answer is :"  << result ;
    return 0;
    
    
}