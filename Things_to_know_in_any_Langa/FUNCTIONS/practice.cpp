#include<iostream>
using namespace std;

int AP(int n ){
    int R = ( 3 * n + 7);
    return R ;
}

int main(){
    int n ;
    cout<<"Enter n :" ;
    cin>> n ;
    cout <<"Answer is :" << AP(n) <<endl ;
    return 0;
}