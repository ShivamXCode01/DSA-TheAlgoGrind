//Reversing a array

# include <iostream>
using namespace std;

//Function for Reversing the array

void reverseArray(int arr[],int n){

    int s = 0 ; 
    int e = n-1;

    while (s <= e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

void printArray(int arr[], int n){
    cout <<"Printing Array Element:";
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << "  ";
    }
}

int main(){

    int arr[6] ={5,32,4,3,29,97};
    cout <<"Before Swapping ";
    printArray(arr,6);
    cout << endl;
    reverseArray(arr,6);
    cout <<"After Swapping  ";
     printArray(arr,6);
    
}