// Constructor is automatically evoked when the object is created
// it has the same name as the class name , it has not any return type

// There are tree types of constructor 
// 1. Default constructor
// 2. Parametrized Constructor 
// 3. Copy constructor

# include <iostream>
using namespace std;

class Car{
    public:
    string Brand;
    int Age;


    // Default constructor
    public:
    Car() {
        Brand ="TATA";
        Age =5;
    }


    // Parametrized Constructor
    public :
    Car(string Brand ,int Age){
        this -> Brand = Brand;
        this -> Age = Age;
    }

    // //copy constructor    

    // public:    

    // class_name(class_name &obj)
    // {        
    // // copies data of the obj parameter        
    //     data_member1 = obj.data_member1;        
    //     data_member2 = obj.data_member2;    
    // }
    // };

    public:
    void show (){
        cout << "the brand of the car is "<< Brand << " and the age of the car is " << Age << endl;
    }


};

int main(){
    Car c ;
    cout << "We are calling default construcor" << endl;
    c.show();

    cout << "We are calling parametrized construcor" << endl;
    Car c1("Hyundai",6);
    c1.show();

    // copy constructor 
    Car c3 (c1);
    c3.show();

}