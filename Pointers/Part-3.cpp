// in this portion we talk about Double Pointer and Char array

# include <iostream>
using namespace std;


void print(int *p){
    cout <<*p <<endl ;
}
void update(int* p){
    p = p + 1; 
}

int main(){

    char ch[8]="Avinash"; //We can assign less than 1 elements in character array because last space is occupied by null character('/0')

    cout <<"Printing char array:"<<ch ;   
    
    char *ptr = &ch[0]; // making a pointer that pointing char array address
    

    // There is difference between char array and integer array because if we want to print the address of element in integer array then
    // it gives the address of integer values using pointer also we can print the specific memory location in  integer array 
    // but in char array we can't access the index size it give the element of the char array elements if we want the elements from 
    // any specific index then also it print elements from that index

    cout<<endl << ptr;
    cout << endl << "2:---:" <<&ch[2] <<endl;

    char s  = 'X';
    char *r = &s;
    cout << "3th:"<< r ;
    cout << endl << "3th:" <<*r;



    // Pointers in Functions
        cout <<endl;
        int value = 5;
        int *ptr1 = &value;
       cout <<"Printing before Update:";
        print(ptr1);
        
        update(ptr1);
        cout <<endl <<"Printing after Update:";
        print(ptr1);


        //Double Pointer :- it is nothing but storing the address of pointer

        int i = 6 ; 
        int *p1 = &i;
        int **p2 = &p1;

        cout <<endl<< i <<endl;
        cout <<endl<< *p1 <<endl;
        cout <<endl<< **p2 <<endl;
        cout <<endl<< &i <<endl;
        cout <<endl<< p1 <<endl;
        cout <<endl<< p2 <<endl;
}