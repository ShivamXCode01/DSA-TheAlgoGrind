# include <iostream>
# include <climits>
using namespace std ;


//Function for Largest column Sum

int  LargestColumn(int arr[][3], int n , int m){
    int maxi = INT_MIN;
    int rowIndex = -1 ;
    for (int i = 0 ; i < m ; i++){
        int sum = 0 ;
        for(int j = 0 ; j < n ; j++){
            sum += arr[j][i];
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
    int arr [3][3] = {3333,2,1,4,3,88888,3,99,4};

   int result = LargestColumn(arr,3,3);
   cout <<"Largest Column sum index is "<< result;
    

}