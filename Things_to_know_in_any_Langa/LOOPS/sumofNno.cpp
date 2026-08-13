/*Sum of N natural numbers
Input N, calculate the sum of numbers from 1 to N.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    //Using While loop
    int i=1;
    int sum=0;
    
  /*  while( i <= n) {
        
        sum=sum+i;
        cout<< "Sum is:" <<sum <<endl;
        i=i+1;

    }*/
   //using for loop
   for(int i =1 ; i <= n; i++){
    
    sum=sum+i;
    cout<<sum  << endl;
    
   }
}