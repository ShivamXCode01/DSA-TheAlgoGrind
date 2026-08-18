# include <iostream>
# include <list>
using namespace std;


int main(){

    list<int>l; // first way to declare a list

    list<int>n(5,100); // another way in this way we can assign the same values in all indexes

    cout <<"printing list: ";
    for(int i :n){              // here we can for each loop to print the list of elements 
        cout << i << " ";
    }
    cout <<endl;

  
    cout <<"Size:- " << l.size() << endl ;

  // We are taking elements in the ltor using inbuilt method 

    l.push_back(2); // it is uded to insert element at the last index of ltor 
    l.push_back(4);
    l.push_back(3);
    l.push_back(8);
    
     cout <<"printing list: ";
    for(int i :l){              // here we can for each loop to print the list of elements 
        cout << i << " ";
    }
   
    cout <<"Size:- " << l.size() << endl ;
    
    l.push_back(7);
    
     cout <<"printing list: ";
    for(int i :l){              // here we can for each loop to print the list of elements 
        cout << i << " ";
    }
    
    cout <<endl ;

    cout <<"Size:- " << l.size() << endl ; // total no of elements in the array

    // the only difference b/w array and ltor is that array is static in m=nature means it can't change its size onces it declared 
    // but ltor is in dynamic in nature means it change its size 
    // it always changes its capacity twice of previous capacity if it gets overflow

   
    cout << endl ;

    cout <<"Empty checker:" << l.empty(); // it is used to check that array is empty or not 
    cout << endl ;

    cout <<"First Element:" << l.front(); // it gives the first element of the array
    cout << endl;

    cout << "Last Elemetn:" << l.back() << endl; // it gives the last element of the array
    

     // there many types of inbuilt function we can check

    n.unique();

     cout <<"printing list after deleting duplicates values: ";
    for(int i :n){              // here we can for each loop to print the list of elements 
        cout << i << " ";
    }

    // there many types of inbuilt function we can check




}