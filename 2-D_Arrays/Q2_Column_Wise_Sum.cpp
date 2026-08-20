# include <iostream>
using namespace std ;

//Function for column  wise sum

void SumofColumn(int arr[][3], int n , int m){
    for (int i = 0 ; i < m ; i++){
        int sum = 0 ;
        for(int j = 0 ; j < n ; j++){
            sum += arr[j][i];
        }
        cout <<"Sum of column " << i << " is:" << sum;
        cout << endl ;
    }
}

int main(){
    int arr [3][3] = {3,2,1,4,3,6,3,2,4};

   SumofColumn(arr,3,3);
    

}