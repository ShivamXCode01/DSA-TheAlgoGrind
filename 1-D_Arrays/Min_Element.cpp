//Finding minimum element in the array

# include <iostream>
# include <climits>
using namespace std;

//Function for finding minimum element in the array

void minElement(int arr[],int n){
    int min = INT_MAX;

    for(int i = 0 ; i < n ; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    cout << "Your minimum elememnt in the array is " << min ;
}


int main(){

    int  arr [6] ={4,3,2,99,-32,5};

    minElement(arr,6);
}