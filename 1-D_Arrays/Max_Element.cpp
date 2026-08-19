//Finding the maximum element in the array

# include <iostream>
# include <climits>
using namespace std;

// Function for finding the largest element in the array
void MaxElement(int arr[],int n){
    int max = INT_MIN;
    for (int i = 0 ; i < n ; i++){
        if(arr [i] > max){
            max = arr[i];
        }
    }
    cout <<"The largest number in array is:" << max;
}

int main(){
    
    int arr[6] = {3,52,4,5,32,9};

    MaxElement(arr,6);
    
}