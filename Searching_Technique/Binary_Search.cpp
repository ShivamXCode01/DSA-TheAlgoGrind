// Binary Search :- it is a searching technique in which we divide array at the middle then compare the 
// middle element with searching element  then perform searching if found then return true else false


// Condition For Binary Search is that Elements of array must be sorted 

# include <iostream>
using namespace std ;

bool binarySearch(int arr[], int n , int t){
    int s = 0 ;
    int e = n-1;
    int mid = s + (e-s)/2;

    while ( s <= e){
        if(arr[mid] == t){
           return 1;
        }
        else if (arr[mid] > t){
            e = mid-1 ;
        }
        else{
            s = mid + 1 ; 
        }
        mid = (s + (e-s)/2);
    }
    return 0;
}

int main(){

    int arr[7] = {3,5,9,54,67,554,655};
    int t ;
    cout << "Printing array element: ";
    for(int i = 0 ; i < 7 ; i++){
        cout << arr[i] << "  ";
    }
    cout << endl;
    cout << "Enter searching Element:";
    cin >> t;
   bool result =  binarySearch(arr,7,t);

   if(result){
    cout<< "Element found";
   }
   else{
    cout << "Element not found";
   }

}