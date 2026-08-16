# include <iostream>
using namespace std;

void Bubble_Sort(int arr[],int n){

    //base case
    if (n == 0 && n ==1){
        return ;
    }
    for (int i = 0 ; i < n-1 ; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
        Bubble_Sort(arr,n-1);
    }
}

//function tao print thae array
void print(int arr[],int n ){
    for (int i = 0 ; i < n ;i++){
        cout << arr[i] << "  " ;
    }
}

int main(){
    int arr[5] = {6,3,5,9,4};
    cout << "Before Sortng:";
    print(arr,5);
    cout << endl;
    Bubble_Sort(arr,5);
    cout << "After sorting:";
    print(arr,5);
}