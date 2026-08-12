/*9. Simple Interest Calculation
Take principal, rate, and time as variables and calculate simple interest using:
SI = (principal × rate × time) / 100.

*/
#include<iostream>
using namespace std;
int main(){
    float p,r,t;
    cout<<"p:";
    cin>>p;
    cout<<"r:";
    cin>>r;
    cout<<"t:";
    cin>>t;
    float SI=(p*r*t)/100;
    cout<<"SI:"<<SI;
}