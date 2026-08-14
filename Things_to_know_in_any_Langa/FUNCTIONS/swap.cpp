/*4. Swap Two Numbers (Call by Reference) (Medium)
Write a function void swapNumbers(int &a, int &b) to swap two
 integers without using a third variable.*/

 #include<iostream>
 using namespace std ;

void swap(int &a , int &b){
     a = a+b;
     b = a- b;
     a = a-b;
    
 }
     

 int main (){
    int a ;
    cin>> a;
    int b ;
    cin>> b ;
    cout<<"Before swapping "<< a << endl << b << endl;
   swap(a,b);
   cout << "After swapping "<< a << endl << b << endl ;
   return 0;

 }
  


 
