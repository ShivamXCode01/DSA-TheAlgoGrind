# include <iostream>
using namespace std;

// Function for Wave Print 
void WavePrint(int arr[][3],int n , int m){
    for(int i = 0 ; i < m ; i++  ){
    if (m & 1 ){
            for (int j = n-1 ; j >= 0 ; j--){
                cout << arr[j][i] << "  ";
            }
            
        }
    else{
            for (int j = 0 ; j < n  ; j++){
                cout << arr[j][i] << "  ";
            }
        }
    }
}


int main(){

    int arr [3][3] = {3,2,42,5,1,7,4,8,33};

    WavePrint(arr,3,3);

}