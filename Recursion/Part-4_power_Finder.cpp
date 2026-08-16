# include <iostream>
using namespace std;

//Function to find the power
int powerFinder(int a,int b){

    //Base case
    if(b == 0)
        return 1;
    if (b==1)
        return a;

    // Recursive relation
    int ans = powerFinder(a,b/2);

    if(b % 2 == 0){
        return ans * ans;
    }
    else{
        return a * ans * ans;
    }
}

int main(){

    int a, b;
    cout << "Enter a : ";
    cin >> a ;
    cout << "Enter b: ";
    cin >> b ;

    int result = powerFinder(a,b);
    cout << "a to the power b is:" <<result;
}