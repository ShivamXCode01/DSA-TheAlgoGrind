# include <iostream>
using namespace std ;

//Function for row wise sum

void SumofRows(int arr[][3], int n , int m){
    for (int i = 0 ; i < n ; i++){
        int sum = 0 ;
        for(int j = 0 ; j < m ; j++){
            sum += arr[i][j];
        }
        cout <<"Sum of row " << i << " is:" << sum;
        cout << endl ;
    }
}

int main(){
    int arr [3][3] = {3,2,1,4,3,6,3,2,4};

   SumofRows(arr,3,3);
    

}