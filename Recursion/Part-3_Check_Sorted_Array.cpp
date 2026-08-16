# include <iostream>
using namespace std;



//Function for checking sorted array

int isSorted(int arr[],int n ){

    //Base case for recursion

    if(n == 0 || n == 1){
        return 1;
    }

    // solving only first
    int i=0 ;
    if(arr[i] < arr[i+1]){
        return 1;
    }
    else{
        return 0;
    }

    //recursive relation
    isSorted(arr+1,n-1);


}



void takinginput(int arr[],int n){
    cout << "Enter your array elements: ";
    for(int i = 0 ; i < n ; i++  ){
        cin >> arr[i];
    }
}

void printArray(int arr[], int n ){
    cout << "Array elements are: ";
    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << "  ";
    }

}


int main(){

    int arr[6] = {5,3,45,32,1,0};
    int size;
    cout << "Enter the size of array:";
    cin >> size;

    int arr2[size];
    takinginput(arr2,size);
    printArray(arr2,size);

    int result = isSorted(arr2,size);
    int result = isSorted(arr,6);



    cout << endl;
    if(result){
        cout << "Sorted Array." <<endl;
    }
    else{
        cout << "Unsorted array." << endl;
    }

}