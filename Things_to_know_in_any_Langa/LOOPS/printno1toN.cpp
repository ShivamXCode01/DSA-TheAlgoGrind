/*Print numbers 1 to N
Input N, print numbers from 1 to N.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:" ;
    cin>>n;

    //using while loop
    /*int i=1;
    while(i<=n){
        cout<<i <<endl;
        i=i+1;
    }*/
   // Using for loop
   for(int i = 1; i <= n; i++){
        cout << i << endl;
    }

     

}