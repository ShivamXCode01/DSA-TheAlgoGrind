// Dynamic Memory Allocation :- In this memory allocated at the run time. It is used where we not know the size of data.

#include <iostream>
using namespace std;

int main(){

    // 1-D array 

    // Creation of array using Dynamic memory Allocation
    int n ;
    cout << "Enter your array size: ";
    cin >> n;
    int *arr = new int[n];

    // Taking elements from user 
    cout << "Enter your array elements: ";
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    //Printing array elements 
    cout << "Array elements are: ";
    for (int i = 0 ; i < n ; i++){
        cout << arr[i] << "  ";
    }


    // 2-D Array 
    
    // CASE-1 : square matrix where row size = column size

    int m;
    cout <<endl << "Enter your 2-D array size:" ;
    cin >> m ;


    //Dynamic 2-D array Creation 
    int ** arr1 = new int *[m];

    // Taking elements of array 
    cout <<"Enter your array elements:";
    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j < m ; j++){
            cin>>arr1[i][j];
        }
    }

    // Printing array elements
    cout <<"Your array elements are:" <<endl;
    for (int i = 0 ; i < m ; i++){
        for (int j = 0 ; j <m ; j++){
            cout <<arr1[i][j] << "  ";
        }
        cout <<endl;
    }

     // CASE-2 : Rectangle matrix where row size != column size

    int n1 , n2;
    cout <<"Enter number of rows for 2-D array:";
    cin>>n1;
    cout <<"Enter number of rows for 2-D array:";
    cin>>n2;

    int ** brr = new int*[n1];
    for(int i = 0 ; i < n1 ; i++){
        brr[i] = new int[n2];
    }

    // Taking elements of array 
    cout <<endl <<"Enter your array elements:";
    for (int i = 0 ; i < n1 ; i++){
        for (int j = 0 ; j < n2 ; j++){
            cin>>brr[i][j];
        }
    }

    // Printing array elements
    cout <<"Your array elements are:" <<endl;
    for (int i = 0 ; i < n1 ; i++){
        for (int j = 0 ; j < n2 ; j++){
            cout <<brr[i][j] << "  ";
        }
        cout <<endl;
    }

    
}