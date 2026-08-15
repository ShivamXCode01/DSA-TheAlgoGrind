// Pass by Reference :-We are passing the address of the variable if do any changes in it then it changes in the original value 
# include <iostream>
using namespace std;

void update(int &n){
    n++;
    cout << "Inside the function: " << n <<endl;
}

int main(){
    int i = 5 ;
    cout << "value of i before calling update function: " << i <<endl ;
    update(i);
    cout << "value of i after calling update function: " << i <<endl;

    // we can see that it changes the origianl value because it has access of address of the variable 
}