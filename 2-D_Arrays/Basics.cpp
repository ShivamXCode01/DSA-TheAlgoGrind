// 2-D arrays 

# include <iostream>
using namespace std;


// Searching an element in the 2-D array
bool searchElement(int arr[][3],int n , int m , int target){
    for (int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < m ; j++){
            if (arr [i][j] == target){
                cout <<"Element found at " << i <<" " << j <<" index";
                return 1 ;
            }
        }
    }
    return 0 ;
}


int main(){
    
    //2-D Array initialization  first parameter for row and second for column 
    int arr [2][2] ={2,3,4,3};

    // Accessing element using index
    cout << arr[0][1] <<endl ;

    int target;
    
    int arr2 [3][3]; 

    //Taking elements from the user 
    cout <<"Enter your array elements:";
    for (int  i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < 3 ; j++){
            cin >> arr2[i][j] ;
        }
    }

    //Printing the Elements of the array 
    cout <<"Your array elements are:" << endl;
    for(int i = 0 ; i < 3 ; i++ ){
        for (int j = 0 ; j < 3 ; j++){
            cout <<arr2 [i][j] << "   ";
        }
        cout << endl;
    }
    
    cout <<"Enter your element to search in the array:";
    cin >> target;

    //Function Call
    int found = searchElement(arr2,3,3,target);
    
    if(found){ 
    }
    else{
        cout <<"Element not present in the array.";
    }
}