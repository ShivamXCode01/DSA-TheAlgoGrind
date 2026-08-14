/*1. Sum of Two Numbers (Easy)
Write a function int sum(int a, int b) that returns the sum of two numbers entered by the user.*/

#include<iostream>
using namespace std;

// function code 
int sum (int a , int b){
    int c = a+ b ;
    return c;

}
int main(){
    int a, b ;
    cout<< "Enter a :";
    cin>> a;
    cout<< "Enter b " ;
    cin>> b ;
    int c = sum (a,b);
    cout<< c ;
    return 0;

}