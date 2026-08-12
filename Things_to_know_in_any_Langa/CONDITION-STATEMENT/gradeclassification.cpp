/*Grade Classification
Input a score (0–100). Use if-elif to print:

A if score ≥ 90

B if 80–89

C if 70–79

D if 60–69

F otherwise*/
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Eenter your Marks: ";
    cin>>marks;
    if(marks>=90 && marks<=100){
    cout<<"grade A";
}
    else if(marks>=80 && marks<90){
        cout<<"grade B";
    }
    else if (marks>=70 && marks<80){
        cout<<"grade C";
    }
    else if (marks>=60  && marks<70){
        cout<<"grade D";
    }
    else{
        cout<<"grade F";
    }
}