# include <iostream>
# include <deque>
using namespace std;

void Print(deque<int>d){
    cout <<"Printing deque Elements:";
    for (int i = 0 ; i < d.size(); i++){
        cout << d[i] << "  ";
    }
}

int main(){

    deque<int>d;

    
    cout <<"Size:- " << d.size() << endl ;

  // We are taking elements in the dtor using inbuilt method 

    d.push_back(2); // it is uded to insert element at the last index of dtor 
    d.push_back(4);
    d.push_back(3);
    d.push_back(8);
    
   
    cout <<"Size:- " << d.size() << endl ;
    
    d.push_back(7);
    
    Print(d);
    
    cout <<endl ;
    
    cout <<"Size:- " << d.size() << endl ; // total no of elements in the array


    cout <<"Element at index 2: " << d.at(2); // it is used to get the element at our desired index 
                                                //just we have to pass the index value
    
    cout << endl ;

    cout <<"Empty checker:" << d.empty(); // it is used to check that array is empty or not 
    cout << endl ;

    cout <<"First Element:" << d.front(); // it gives the first element of the array
    cout << endl;

    cout << "Last Elemetn:" << d.back(); // it gives the last element of the array

    // there many types of inbuilt function we can check
    
}