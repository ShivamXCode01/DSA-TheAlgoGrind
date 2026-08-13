/*Reverse counting
Input N, print numbers from N to 1.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter N: " ;
    cin>>n;
  
    // using while loop 
    int i=0;
    while(i <= n ){
      int R= n-i;
      cout<<R<<endl;
      i = i+1;
    }
}