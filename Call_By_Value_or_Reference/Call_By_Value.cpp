// We are passing the variable its value means copy of variable 

# include <iostream>
using namespace std;

void update(int n){
    n++;
    cout << "Inside the function: " << n <<endl;
}

int main(){
    int i = 5 ;
    cout << "value of i before calling update function: " << i <<endl ;
    update(i);
    cout << "value of i after calling update function: " << i <<endl;

    // We can see that inside the function it changes the value of i that is stored in  different location so 
    // in original value nothing will be change 
}