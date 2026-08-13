//Day of the Week (Easy)
//Write a C++ program that takes a number (1–7) as input and prints the corresponding day of the week.

# include<iostream>
using namespace std;
int main(){
    int n ;
    cout<< "Enter your choice : ";
    cin>> n ;
    
    switch (n){
        case 1 :
        cout<< "Sunday"<< endl ;
        break;
        case 2:
        cout<< "Monday" << endl;
        break;
        case 3:
        cout<<"Tuesday"<< endl;
        break;

        case 4 :
        cout<< " Wednesday" << endl;
        break;

        case 5:
        cout<< "Thursday" << endl ;
        break;
        
        case 6 :
        cout<< "Friday" << endl ;
        break;

        case 7:
        cout<< " Saturday" << endl ;
        break;

        default :
        cout<< " You choice is invalid !! ";
    }
}