#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << " Enter n : "; 
    cin >> n ;
    int i = 1 ;
   while ( i <= n ){
    int j = 1 ;
    while ( j <= n ){
        cout << char ( 65 + j - 1 ) << "  ";
        j = j + 1 ;
    }
     i = i + 1 ;
      cout << endl ;
   }
}