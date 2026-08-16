# include <iostream>
using namespace std;

void print(int arr[], int n ){
    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


//Function for binary search using recursion

int binarySearch(int arr[],int n,int s, int e, int target){
    print(arr,n); // Only for visulization purpose
    //Base case
    if(s > e)
        return 0 ;
    

    int mid = s + (e-s)/2;

    if(arr[mid] == target){
        return 1;
    }
    else if(arr[mid] < target){
        return binarySearch(arr,n,mid+1,e,target);
    }
    else{
        return binarySearch(arr,n,e,mid-1,target);
    }

}


int main(){

    int arr[6] = {5,7,9,11,15,16};

    int result = binarySearch(arr,6,0,4,16);

    if(result){
        cout << "Element found.";
    }
    else{
        cout << "Element not found.";
    }

}