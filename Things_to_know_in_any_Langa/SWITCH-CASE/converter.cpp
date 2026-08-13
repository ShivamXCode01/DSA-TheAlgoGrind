/*Menu-Driven Unit Converter (Hard)
Write a C++ program that displays a menu:

1. Km to Miles  
2. Celsius to Fahrenheit  
3. Kilograms to Pounds  
4. Exit  */
# include<iostream>
using namespace std;
int main(){
    cout<< " Menu " << endl ;
    cout<<"1.Kilometer to meter." << endl;
    cout<< "2.Celcius to fehrenheit . " << endl;
    cout << "3.Kilogram to gram ." << endl ;
    cout << "4. Exit "  << endl ;

    int n;
    cout <<" Enter you menu : "  ;
    cin >> n ;

    int a  ;
    cout << "Enter value of : " ;
    cin>> a;

    
    switch (n){
        case 1 :
             cout << "Answer:" << a*1000 << endl ;
             break ;
        case 2 : 
             cout << "Answer: " << ( a * 9/5) + 32 << endl ;
             break;
        case 3 :
            cout << "Answer:" << a * 1000 << endl ;
            break ;
        case 4 :
            cout << "Exit " ;
        default :
             cout << "You Entered wrong menu . sorry !" ;
    }
}