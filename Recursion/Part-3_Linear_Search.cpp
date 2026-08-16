# include <iostream>
using namespace std;


void print(int arr[], int n ){
    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
//Function for linearSearch

int linearSearch(int arr[], int n,int target ){
    print(arr,n);
    // Base case for linear Search
    if(n == 0){
        return 0;
    }

    if(arr[0] == target)
        return 1;
    

    //Recurance relation
    return linearSearch(arr+1,n-1,target);
    
}


int main(){

    int arr[6] = {5,7,9,11,15,16};

    int result = linearSearch(arr,6,16);

    if(result){
        cout << "Element found.";
    }
    else{
        cout << "Element not found.";
    }
}