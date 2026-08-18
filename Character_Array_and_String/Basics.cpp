// String is nothing but it is a sequenece of character

# include <iostream>
# include <cstring>
using namespace std;

int main(){

    char s = 'R';
    cout << s << endl;
    cout << sizeof(s) << endl;

    string str = "John Doe";

    cout << str << endl ;

    cout <<"Lenth of string: "<< str.length() << endl ;
    cout <<"Size of string: "<<  str.size() << endl;
    str.push_back('!');
    cout << str << endl;
    str.pop_back();
    cout << str <<endl;

    cout << "Getting char at specific index: " << str[7] << endl;
    cout << "Getting a substring from a string: "<< str.substr(2,7) << endl ;

    // Character Array

    char D[92];
    cout << "Taking input of char: ";
    cin >> D;
    cout <<"Your charcter of string is: ";
    cout << D;

    cout <<"total size of array: " << sizeof(D); // it gives size array that allocated to memory location
    cout <<"Total number of elements in array: " << strlen(D); // it gives the length of character present in the array character
}