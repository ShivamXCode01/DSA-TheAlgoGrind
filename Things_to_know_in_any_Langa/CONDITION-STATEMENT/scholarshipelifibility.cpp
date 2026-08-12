/*Question: Scholarship Eligibility System
Problem:
A university offers scholarships based on the following rules:

The student must have scored at least 80% overall.

The student must have attendance ≥ 75%.

The amount of scholarship depends on extra conditions:

If score ≥ 90% and attendance ≥ 90% → Full scholarship.

If score ≥ 85% and attendance ≥ 80% → Half scholarship.

If score ≥ 80% and attendance ≥ 75% → Quarter scholarship.

If either the score or attendance condition fails, the student is Not eligible.*/
#include<iostream>
using namespace std;
int main(){
    int s,a;
    cout<<"Enter score:";
    cin>>s;
    cout<<"Enter attendence:";
    cin>>a;
    if(s>=90 && s<100 && a>=90 && a<100){
        cout<<"You got full Scholarship.";
    }
    else if(s>=85  && a>=80 ){
        cout<<"You got half scholarship.";
    }
    else if(s>=80 && a>=75){
        cout<<"You got quater scholarship.";
    }
    else{
        cout<<"You will not get scholarship beacause you can't full fill the condition";
    }
}