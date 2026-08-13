/*Count digits in a number
Input a number, count how many digits it has.*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count = 0;
  /*  if (n==0){
        count=1;
    }
    else{
        while(n>0){
    n = n/10;
    count++;
        }
}
cout<<"Number of digits: " <<count<<endl; */

//using for loop

if (n==0){
    count=1;
}
else{
    for( int temp=n ; temp!=0;temp= temp/10 ) {
        count++;
}
}
 cout<<"Number of digits: "<< count<<endl;
}