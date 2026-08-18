# include <iostream>
# include <set>
using namespace std;


int main(){

    set<int>s;

    s.insert(6);
    s.insert(5);
    s.insert(3);
    s.insert(0);
    s.insert(11);
    s.insert(21);

    cout <<"Printing Set elements: " ;
    for(auto i :s ){
        cout <<i << "  ";
    }
    cout << endl;

    cout << s.size() << endl;
    cout << s.empty();
}