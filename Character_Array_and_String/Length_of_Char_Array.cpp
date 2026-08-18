# include <iostream>
using namespace std;

int main(){
    char ch[60];
    cout << "Enter your character: " ;
    cin >> ch ;

    int count = 0 ;
    cout << "Printing array characters: ";
    for(int i = 0 ; ch[i] != '\0'; i++){
        cout << ch[i] << "  ";
        count ++;
    }
    cout << endl;
    cout << "No. of character:" << count ;

}