// finding nCr of any number 

#include<iostream>
using namespace std;

int factorial(int n){
    
    int f =1 ;
    for (int i = 1 ; i <= n ; i ++){
         f = f * i ;
        
    }
    return f ;
} 

int nCr(int n , int r ){
     int a , b ;
       a = factorial(n) ;
       if (r > n)
        {
            cout <<"Invalid ";
            
        }
        
        else{
        b = factorial(r) * factorial(n-r) ;
        }
      
      
       
       return a/b;

}


 int main (){
    int n ,r;
    cout<< "Enter N :" ;
    cin>> n ;
    cout<<"Enter R :" ;
    cin>> r ;
  
    cout<< "Answer :" << nCr(n,r) << endl ;
    return 0;
 }