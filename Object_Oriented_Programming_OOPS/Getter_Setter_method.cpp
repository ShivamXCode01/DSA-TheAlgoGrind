// Getter methiod is used to  fetch / get the value of private data members
// Setter method is used to set the value of the private data members

# include <iostream>
using namespace std;

class Demo{

    private:
    int salary =65999;

    public:
    int get_salary(){
        return salary;
    }

    public:
    void set_salary(int s){
        salary = s ;
    }




};

int main(){
    Demo D ;
    cout << "We are fetch the salary using getter method before setting the value : " << D.get_salary() <<endl;

    D.set_salary(78999);
    cout << "We are fetch the salary using getter method after setting the value : " << D.get_salary() <<endl;
}