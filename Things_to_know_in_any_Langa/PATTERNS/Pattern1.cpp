#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter n : ";
    cin >> n ;
    int i =1;
    while(i<=n){
         int j = 1;
         while (j <= n){
            cout << j << " ";         // 1 2 3 4 
           // cout<< n+1-j  << " " ;  //  for reverse printing // 4 3 2 1
            j=j+1;
            
         }
          i= i+1;
          cout<< endl;

    }
    return 0; 
}