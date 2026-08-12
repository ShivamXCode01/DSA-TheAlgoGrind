/*Character Type Checker
Input a single character. Print if it’s uppercase letter, lowercase letter, digit, or special symbol.*/
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a: ";
    cin>>ch;
    if (ch >= 'a' && ch <= 'z') {
        cout << "It is a lowercase character.";
    }
    else if (ch >= 'A' && ch <= 'Z') {
        cout << "It is an uppercase character.";
    }
    else if (ch >= '0' && ch <= '9') {
        cout << "It is a number.";
    }
    else {
        cout << "It is a special character.";
    }
}