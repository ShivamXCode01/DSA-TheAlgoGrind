# include <iostream>
using namespace std;

void print(string s, int n ){
    for (int i = 0 ; i < n ; i++){
        cout << s[i] << " ";
    }
    cout << endl;
}
//Function for reversing the string

string reverseString(string &s ,int i ,int j){
    print(s,j); // Only for visulization purpose
    // int  i = 0 ; 
    // int j  = s.length();

    if (i > j ){
        return s ;
    }
    swap(s[i],s[j]);
    
    //recursive relation
    return reverseString(s,i+1,j-1);
   
}


int main(){

    string str = "John Doe";
    cout << "Original String: " << str <<endl;
    string result =reverseString(str,0,str.length()-1);

    cout << "Reversed string: " << result;
}