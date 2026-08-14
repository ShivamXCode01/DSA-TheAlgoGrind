/*10. Menu-Driven Calculator using Functions (Hard)
Write separate functions for add(), subtract(), multiply(), divide() and 
make a menu-driven program that repeatedly takes
 user input and calls the required function.*/


 #include<iostream>
 using namespace std;

 int sum(int n1 , int n2 ){
        int s = n1 + n2 ;
        return s;
 }

int sub(int n1 , int n2) {
    int s = n1- n2 ;
    return s ;
} 

int mul(int n1 , int n2){
    int m = n1 * n2 ;
    return m;
}

int divi (int n1 , int n2){
    if (n2 != 0 ){
    int d = n1 /n2 ;
   
    return d ;
    }
    else{
        cout<<"Can't divide by 0 ." ;
    }
    return 0 ;
}

int main(){
    int choice , n1 ,n2 ;
    do{
      cout<<"Menu"<< endl ;
      cout<<"1.Addition" << endl ;
      cout<<"2.Substration" <<endl ;
      cout<<"3.Multiplication" << endl ;
      cout<<"4.Division" << endl ;
      cout<<"5.Exit the operation." << endl ;
      
      cout <<"Enter your choice:" <<endl;
      cin>>choice ;
      if (choice >= 1 && choice <= 4){
        
        cout<<"Enter your first number:" ;
        cin>>n1;
        cout<<"Enter your second number:" ;
        cin>>n2;
      }

       switch(choice){
       case 1 : 
            cout<<"Result : " << sum(n1 , n2 )  << endl ;
        break;
        case 2 : 
             cout<<"Result : " <<sub (n1 ,n2) << endl ;
        break;
        case 3:
             cout<<"Result : "<< mul(n1,n2) << endl ;
        break ;
        case 4:
             cout << "Result : " << divi(n1 , n2 ) << endl ;
        break ;
        case 5:
             cout << " you exited. " << endl ;
             break;
        default:
             cout<<"You Entered a invalid choice."<< endl ;
             break;
        
             
        

    }
}
    while(choice != 5 ) ;
    
         cout <<"Invaild selection. ";
    
    


                return 0;

}




