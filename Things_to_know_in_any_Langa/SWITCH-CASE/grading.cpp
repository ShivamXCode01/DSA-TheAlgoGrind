/*4. Grade to Remark (Medium-Hard)
Write a C++ program that takes a grade letter (A, B, C, D, F) 
as input and prints remarks like:

A → Excellent

B → Good

C → Average

D → Pass

F → Fail*/

# include<iostream>
using namespace std;
int main(){
char ch ;
cout<< "Enter your grade :" ;
cin>> ch ;

switch(ch) {
    case 'A' :
    cout<< "Excellent";
    break ;
    case 'B' :
    cout << " Good " ;
    break ;
    case 'C' :
    cout << "Average";
    break ;
    case 'D' :
    cout << "Pass" ;
    break ;
    case 'F' :
    cout << "Fail";
    break ;
    default : 
    cout << "You grade is invalid.";
}
}