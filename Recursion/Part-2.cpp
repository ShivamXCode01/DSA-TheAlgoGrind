# include <iostream>
using namespace std;

//Fibonacci Series function
int fibonacci(int n ){
   //Base condtion for recursion
    if(n == 0){
        return 0;
    }
    else if (n == 1){
        return 1 ;
    }

    int sum = fibonacci(n-1)+fibonacci(n-2);

    return sum;
}

//function for say the number

void sayNumber(int n ,string arr[] ){
    //base case
    if(n == 0)
        return ;

    int digit = n % 10 ;
    n = n/10;
    

    //recursive call
    sayNumber(n,arr);
    cout << arr[digit] <<" ";
}


int main(){
    int n ;
    cout <<"Enter n for fibonacci series:";
    cin >> n ;

    int result = fibonacci(n);

    cout << "Fibonacci series is: "<<result<<endl;

    int digit;
    
    cout << "Enter your number to say: ";
    cin >> digit;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};

    sayNumber(digit,arr);

}