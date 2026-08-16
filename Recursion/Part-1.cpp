// Recursion :- it is a type of function that calling itself again and again till it reaches it's base case

# include <iostream>
using namespace std;

//Finding factorial using recursion

int factorial(int n){
    
    if(n == 0)    // in this block of code we declare the base case
        return 1;
    
        return n * factorial(n-1);  // Here function calling itself 

}

// Finding 2 power n 

int power(int n){
    
    if (n == 0)
        return 1 ;

    return 2 * power(n-1);
}

   

int main(){
    
    int n = 6 ;

    int result = factorial(n);   // Function calling  and storing in a variable 
    cout << "Result : " << result <<endl ;

    int result1 = power(n);
    cout <<"Result1: " << result1;

}