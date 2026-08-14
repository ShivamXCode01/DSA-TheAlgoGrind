/* 1 2 3 
   4 5 6
   7 8 9 */
#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<< " Enter n : ";
    cin>> n ;
    int i = 1; 
    int count = 1;
    // reverse 
    //int count =  n * n ; 
    while ( i <= n){
     int j =1 ;
     while (j <= n){
        // reverse printing 
        //cout << count   << "  ";
        cout<< count << "  ";
        count = count + 1;
        // count = count - 1 ;
        j = j + 1;
     }
      i = i + 1; 
      cout << endl ;
    }
}