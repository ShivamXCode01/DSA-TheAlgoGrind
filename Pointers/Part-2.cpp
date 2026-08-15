// Array Declaration using pointer

# include <iostream>
using namespace std;

int main(){

    int arr[10] = {4,2,1,7,6};

    int *ptr = &arr[0];
    cout << "Accessing the value of first element:"<<*ptr <<endl;
    cout << "4th:"<<ptr <<endl;
    cout <<"First address:"<<arr <<endl;
    cout << "2nd:"<<&arr <<endl;
    cout <<"3rd:"<< &arr[1] <<endl;
    
    cout << endl;
    cout << "Value manipulation:" << endl;
    cout <<"5th:"<<*arr + 1 << endl;
    cout <<"5th:"<<*ptr + 1 << endl;
   
    cout <<endl;
    cout <<"Size:" <<endl;
    cout <<"6th:"<< &arr <<endl;
    cout <<"6th:"<< ptr <<endl;

    cout << endl << "Size manipulation:" << endl;
    cout << "7th:"<<&arr[0] + 1  <<endl;
    cout << "7th:"<<ptr + 1  <<endl;

    // arr[i] = *(arr + i)  or i[arr] = *(i + arr) is same thing 

    int i = 3;
    cout <<endl << "8th:" << i[arr] <<endl;
    cout <<"8th:"<<*(arr + i) <<endl;

    cout << endl << "Size:" <<endl;
    cout <<"9th:"<<sizeof(arr) << endl; // it gives the total size of array 
    cout <<"9th:"<<sizeof(ptr) << endl;

    cout <<endl;

    cout <<"10th:"<< *(ptr) + 4 <<endl; 
    cout << "10th:" <<*(ptr + 4) <<endl;


    // Here the big catch is that if we *ptr then it gives values and if we call ptr then it gives address
    //in the above 10th one first *(ptr) + 4 in this first print the first element the  add the 4 to that element
    // but in *(ptr + 4 ) first add first address with 4 then give the element that is present in that index








}