#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << " Enter n : ";
    cin >> n ;
     int i = 1 ;
     int c = 65 ;
      while ( i <= n ){
        int j = 1 ;
        while ( j <= n ){
            cout << char ( c ) << "  " ; 
            c = c + 1 ;
            j = j + 1 ;
        }
         i = i + 1 ;
       cout << endl ;
    }
}