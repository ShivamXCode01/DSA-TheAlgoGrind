/*Simple Calculator (Easy-Medium)
Write a C++ program that takes two numbers and an operator 
(+, -, *, /) from the user, then uses switch to perform the calculation.*/

# include<iostream>
using namespace std;
int main(){
 int a , b;
 cout << "Enter a : "  ;
 cin >> a ;
  cout << "Enter b: " ;
  cin    >> b ;
 char task ;
 cout<< " Enter your task: " ;
  cin>> task ;
 
  switch(task){
    case '+' :
    
    cout << " Addition :" << a+b << endl ;
    break;

    case '-' :
    
    cout<< "Substration :" <<  a-b <<endl ;
    break ;

    case '*' :
  
    cout<< "Multiplication : " << a * b << endl;

    case '/' :
    
    cout << "Division : " << a /b << endl ;
    break;
    
    case '%' :
    
    cout << " Remainder: "  << a% b << endl ; 
    break ;
   

    default:
    cout<< " you task is invalid " << endl ;
  }
}