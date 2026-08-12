/*Vowel or Consonant
Input a character (alphabet). Print “Vowel” if it’s a vowel, else “Consonant” (case-insensitive).*/
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter character: ";
    cin>>ch;
    char lowerCh = tolower(ch);

    if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            cout<<"The character is vowel.";
    }
    
    else{
        cout<<"The character is consonant.";
    }
}