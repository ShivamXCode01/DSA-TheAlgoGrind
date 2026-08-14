/*5. Find Maximum of Three Numbers (Medium)
Write a function int maxOfThree(int a, int b, int c) that 
returns the largest number among three.*/

#include<iostream>
using namespace std;

int greatest(int a , int b, int c){
    if(a>= b && a >= c ){
        cout << " a is greatest ";
        return a;
    }
    else if (b >= a && b >= c ){
        cout<< "b is greater " ;
        return b;
    }
     else{
        cout<< "C is greater ";
        return c;
     }
      
    }


    int main(){
        int a, b ,c ;
        cout<<"Enter your three  numbers to check:";
        cin>> a>>b>>c;
         int result = greatest(a,b,c);
         cout << result ;

         return 0;

    }
