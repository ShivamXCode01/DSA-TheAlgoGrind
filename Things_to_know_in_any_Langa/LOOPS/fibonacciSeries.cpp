#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter n :" ;
    cin >> n ;
    int a = 0 ;
    int b = 1 ;
    unsigned long long sum = 0 ;
    cout << a << " " << b << " " ;

    for ( int i = 0 ; i <= n ; i++ ){
          sum = a+ b ;
          cout<< sum << "  " ;
          a= b ;
          b = sum ;
    }
     return 0;
}