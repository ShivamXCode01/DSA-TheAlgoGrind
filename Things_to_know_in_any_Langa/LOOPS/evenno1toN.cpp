/*Print even numbers up to N
Input N, print all even numbers from 1 to N.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;

    //Using while loop
  /*int i=1;
 while(i<=n){
        
        if(i%2==0){
            cout<< i <<endl;

        }
        i= i + 1;
    }*/

    //using for loop
    for(int i = 1; i <= n ; i= i+1){
        if(i %2== 0){
            cout<< i<<endl;


        }
    }
}