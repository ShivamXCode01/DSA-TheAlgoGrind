# include <iostream>
using namespace std;


void print(string s, int n ){
    for (int i = 0 ; i < n ; i++){
        cout << s[i] << " ";
    }
    cout << endl;
}

//Function for checking palidrome using recursion

bool palidromeChecker(string s , int i , int j){
    print(s,j); // Only for visulization purpose
    // Base case
    if(i >= j)
        return true;

    if(s[i] == s[j]){
        return palidromeChecker(s, i+1, j-1);
    }
    else{
        return false;
    }

    
    
}

int main(){

    string s = "abccba";
    int result = palidromeChecker(s,0,s.length()-1);

    if(result){
        cout << "Palidrome";
    }
    else{
        cout << "not Palidrome";
    }
}