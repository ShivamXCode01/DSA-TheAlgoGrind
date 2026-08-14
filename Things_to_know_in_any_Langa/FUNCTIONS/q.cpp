#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int greatest(int a , int b , int c, int d ) {
  if (a >= b && a >= c && a >= d){
    cout <<a ;
    return a;
  }
  else if (b >= c && b >= d && b >= a){
    cout<<b ;
    return b;
  }
   else if (c>= d && c >= a && c >= b){
    cout<<c ;
    return c;
   }
   else {
      cout<<d;
      return d;
    
}
}

int main() {
  int a,b,c,d;
  cin>> a >> b>> c>> d ;
  cout << greatest(a,b,c,d);
  return 0;
  
}