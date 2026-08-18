# include <iostream>
using namespace std;
# include <array>


int main(){

    int arr1 [4] ; // it is the general way to decalaring the array 

    array<int ,4>arr = {6,4,3,9};  // we are decalring the array  using STL in this we have to follow few rules:-
                        // 1. First what you want to declare    2. DataType of array   3.Size of the array    4.Name of array

    int size = arr.size(); // it is used to get the size of array
    cout << size << endl; 

    // cout <<"Enter your array elements size 4:";
    // for (int i = 0 ; i < arr.size(); i++){
    //     cin >> arr[i];
    // }

    cout <<"Your array elements are:";
    for (int i = 0 ; i < size ; i++){
        cout << arr[i] << "  ";
    }
        cout << endl ;

    //  There are some built in funtion in the array. they are following:-

    cout <<"Element at index 2: " << arr.at(2); // it is used to get the element at our desired index 
                                                //just we have to pass the index value
    
    cout << endl ;

    cout <<"Empty checker:" << arr.empty(); // it is used to check that array is empty or not 
    cout << endl ;

    cout <<"First Element:" << arr.front(); // it gives the first element of the array
    cout << endl;

    cout << "Last Elemetn:" << arr.back(); // it gives the last element of the array

    // there many types of inbuilt function we can check 
}