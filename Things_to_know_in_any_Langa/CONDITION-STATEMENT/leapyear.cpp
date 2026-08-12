/*Leap Year Checker
Input a year. Print whether it’s a leap year (divisible by 4 but century years must also be divisible by 400).*/
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Please select year: ";
    cin>>year;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "It is a leap year.";
        
    }
    else{
        cout<<"It is not a leap year.";
    }
}