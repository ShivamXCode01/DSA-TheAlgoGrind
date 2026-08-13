/*Prime number check
Input a number, check if it is prime.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
   /*   int i = 2;
  while(i<n){
        if (n%i==0){
            cout<<"Not Prime.";
            break;
        }
         
        else {
             cout<<"Prime.";
        }
        i= i++;
       
         }  */
        for ( int i = 2 ; i <= n ; i++){
            if (n%i == 0 ){
                cout<< " Not a prime number " << endl;
                break ;
            }
             cout << " prime" ;
        }
        
}