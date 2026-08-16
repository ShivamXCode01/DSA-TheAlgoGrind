# include <iostream>
using namespace std;

//Function for partition
int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt = 0 ;

    for (int i = s+1 ; i <= e ; i++){
        if(arr[i] <= pivot){
            cnt ++;
        }
    }
    //placing pivot element 
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex],arr[s]);

    // left and right part sorting 
        int i = s; int j = e;

        while ( i < pivotIndex && j > pivotIndex ){
            while (arr[i] < pivot){
                i++;
            }
            while (arr[j] > pivot){
                j--;
            }
            if (i < pivotIndex && j > pivotIndex){
                swap(arr[i++],arr[j--]);
            }
        }
        return pivotIndex;
    

}

//function for quick sort
void quicksort(int arr[],int s,int e){
    if (s>=e){
        return;
    }
    int p = partition (arr,s,e);
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);

}

//function to print array
void print(int arr[],int n ){
    for (int i = 0 ; i < n ;i++){
        cout << arr[i] << "  " ;
    }
}

int main(){
    int arr[6]={6,3,9,1,0,2};
    cout <<"before sorting: ";
    print(arr,6);
    cout <<endl;
    quicksort(arr,0,5);
    cout <<"After sorting: ";
    print(arr,6);
}