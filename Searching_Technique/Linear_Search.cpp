//Linear Search :- it a technique in which we traverse all the elements one by one if element found then return 
// element found else return element not found 

# include <iostream>
using namespace std;

void PrintingArray(int arr[], int n){
    cout << "Printing array Element: ";
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

bool linearSearch(int arr[],int n,int t){
    for (int i = 0 ; i < n ; i++){
        if(arr[i] == t){
           return i;
        }
    }
    return 0 ;
    
}

int main(){

    int arr [6] = {6,4,3,9,8,7};
    PrintingArray(arr,6);
    int target;
    cout << "Enter element to search: ";
    cin >> target;
        
    bool result = linearSearch(arr , 6 ,target);

    if(result){
        cout << "Element found";
    }
    else{
        cout << "Element not found!";
    }
}