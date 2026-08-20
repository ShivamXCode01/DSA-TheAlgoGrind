# include <iostream>
# include <climits>
using namespace std ;


//Function for Largest Row Sum

int  LargestRow(int arr[][3], int n , int m){
    int maxi = INT_MIN;
    int rowIndex = -1 ;
    for (int i = 0 ; i < n ; i++){
        int sum = 0 ;
        for(int j = 0 ; j < m ; j++){
            sum += arr[i][j];
        }
        if(maxi < sum){
            maxi = sum ;
           rowIndex = i ;
        }
    }
    cout << maxi << endl ;
    return rowIndex;

}

int main(){
    int arr [3][3] = {3,2,1,4,3,6,3,99,4};

   int result = LargestRow(arr,3,3);
   cout <<"Largest row sum index is "<< result;
    

}