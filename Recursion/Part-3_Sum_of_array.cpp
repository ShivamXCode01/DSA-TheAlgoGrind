# include <iostream>
using namespace std;


void print(int arr[], int n ){
    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//Function for sum of array using recurssion

int sumArray(int arr[], int n) {
    print(arr,n);  // Only for visulization purpose
    // Base case
    if(n == 0)
        return 0;

    // Recursive relation
    return arr[0] + sumArray(arr + 1, n - 1);
}


int main(){

    int arr [5] = {5,3,24,5,3};

    int result = sumArray(arr,5);

    cout << "Sum of array is: "<<result;

}