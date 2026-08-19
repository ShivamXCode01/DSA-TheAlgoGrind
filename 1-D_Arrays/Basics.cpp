// Array is a data Structure that stores only same type of data in sequential order.

# include <iostream>
using namespace std;

//Function for Taking input Array Elements From User
void inputElement(int arr[],int n){
    cout <<"Enter your Array Elements:";
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    cout << endl ;
}

//Function for  Printing Array Elements 
void printArray(int arr[],int n){
    cout <<"Printing Array Elements:";
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
}

// Function for searching an element in the array
bool searchElement(int arr[], int n , int t){
        for(int i = 0 ; i < n ; i ++){
            if (arr[i] == t){
                return 1;
            }
        }
        return 0;
        
    }


    int main(){

    // Array Implementation or Declaration

    int arr[5] = {3,5,3,2,3};
    printArray(arr,5);

    int arr1[100];

    int n,t ; 
    cout <<"Enter your size of array:";
    cin>>n;
    
    inputElement(arr1,n);
    printArray(arr1,n);

    cout << "Enter your element to search:";
    cin>>t;

    bool result = searchElement(arr1,n,t);

    if(result){
        cout << "Element is present in the array.";
    }
    else{
        cout <<"Element not found!";
    }
    

    
}