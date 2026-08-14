// A
// B B
// C C C

#include<iostream>
using namespace std;
int main(){
    int n ; 
    cout<<"Enter your number: ";
    cin>> n;
     
    int i = 1;
    
    while( i <= n ){
       
        int j = 1 ;
         
        while ( j <= i ){
            char c = 'A' + i - 1;
            cout<< c << " " ;
            j= j + 1 ;
            

        }
        i = i+ 1 ;
        cout<< endl;
    }

}