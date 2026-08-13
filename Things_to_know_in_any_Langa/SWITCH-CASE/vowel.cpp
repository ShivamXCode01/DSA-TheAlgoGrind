/*Vowel or Consonant (Medium)
Write a C++ program that takes a character as input and uses switch to determine if it is a vowel 
(uppercase or lowercase) or a consonant.*/

/*# include<iostream>
using namespace std;
int main(){
    char ch ;
    cout<< " Enter your character :" ;
    cin>> ch ;

    /*switch(ch){
        case 'a':
        cout << "Vowel " << endl ;
        break;
    
        case 'e' :
         cout << "Vowel " << endl ;
         break;

         case 'i':
          cout << "Vowel " << endl ;
          break;
          case 'o':
           cout << "Vowel " << endl ;
           break ;
           case 'u':
            cout << "Vowel " << endl ; 
            break;

        default :
        cout<< "Consonant " ; */

       /* switch(ch) {
            case 'a': case 'e' : case 'i' : case 'o' : case 'u' :
            case 'A' : case 'E' : case 'I' : case 'O' : case 'U' :
            cout << "Vowel" ;
            break ;
            default : 
            if ( (ch >= 'a' && ch <= 'z') ||(ch >= 'A' && ch <= 'Z')){
                cout << "Consonant" ; 
        }      else{
                    cout << " You not entered a valid character ";
                } */

                #include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    switch(ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Vowel"; break;
        default:
            if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
                cout << "Consonant";
            else
                cout << "Not an alphabet!";
    }
    return 0;
}


    

