/*Sum of digits
Input a number, find the sum of its digits.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a digit: ";
    cin>>n;
    int sum= 0;
    while(n>0 ) {
        int r= n%10;
        sum=sum+r;
         n= n/10;
        
    }
    cout<< " sum of digit: " << sum << endl;

    }
