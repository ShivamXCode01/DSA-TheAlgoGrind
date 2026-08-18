# include <iostream>
# include <vector>
using namespace std ;

void Print(vector<int>vec){
    cout <<"Printing vector Elements:";
    for (int i = 0 ; i < vec.size(); i++){
        cout << vec[i] << "  ";
    }
}

int main(){

    vector<int>vec ; // it the way of declaration of vector first vector then dataType then vector name

    cout <<"Capacity:- "<<vec.capacity() << endl;
    cout <<"Size:- " << vec.size() << endl ;

  // We are taking elements in the vector using inbuilt method 

    vec.push_back(2); // it is uded to insert element at the last index of vector 
    vec.push_back(4);
    vec.push_back(3);
    vec.push_back(8);
    
    cout <<"Capacity:- "<<vec.capacity() << endl;
    cout <<"Size:- " << vec.size() << endl ;
    
    vec.push_back(7);
    
    Print(vec);
    
    cout <<endl ;
    cout <<"Capacity:- "<<vec.capacity() << endl; // total no of space in the vector 
    cout <<"Size:- " << vec.size() << endl ; // total no of elements in the array

    // the only difference b/w array and vector is that array is static in m=nature means it can't change its size onces it declared 
    // but vector is in dynamic in nature means it change its size 
    // it always changes its capacity twice of previous capacity if it gets overflow

    cout <<"Element at index 2: " << vec.at(2); // it is used to get the element at our desired index 
                                                //just we have to pass the index value
    
    cout << endl ;

    cout <<"Empty checker:" << vec.empty(); // it is used to check that array is empty or not 
    cout << endl ;

    cout <<"First Element:" << vec.front(); // it gives the first element of the array
    cout << endl;

    cout << "Last Elemetn:" << vec.back(); // it gives the last element of the array
    

     // there many types of inbuilt function we can check


}