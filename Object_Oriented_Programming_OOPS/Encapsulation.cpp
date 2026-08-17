// Encapsulation :- Encapsulation is the process of wrapping data (variables) and methods (functions) together in a single unit (class) 
                    //and restricting direct access to them.


# include <iostream>
using namespace std;

class Book{

    private:
        string name;
        int pages;

    public:
    string get_name (){
        return name;
    }

    public :
    void set_name(string s){
       name = s; 
    }


};

int main(){

    // We can't access the pages because it is private
    Book b1;
    cout << "Before setting the name:- ";
    cout << b1.get_name();
    cout << endl << "After setting the name:-";
    b1.set_name("Hands on machine Learning");
    cout <<b1.get_name();
}