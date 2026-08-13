/*Multiplication table
Input a number, print its table up to 10.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:" ;
    cin>>n;
    
    //using while loop
 /*  int i ;
    int m =1;
    while( m <= 10){
        i = n * m;
        cout<<i << endl;
        m = m+1 ;

    }*/

    //using for loop
    for(int m = 1 ; m <= 10 ; m++ ){
        int i = m * n;
        cout<< i << endl ;
    }


    }
