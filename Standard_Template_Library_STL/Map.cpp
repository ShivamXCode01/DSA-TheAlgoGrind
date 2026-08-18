# include <iostream>
# include <map>
using namespace std;

int main(){
    
    // Map is a dataStructure that takes values in the key pair means every value is associated with no duplicate keys allows
    // in below we declaring a map in this we given key datatype is integer and value dataType is String
    map<int,string>m; 

    //mapName[Key]=Value
    m[1] ="Jai";
    m[2] ="Kumar";
    m[3] = "Shah";

    // we can also print our map using for each loop
    
    // here for each loop is slightly different we are not declaring the i variable it is set auto means it automatically detect
    // in printing statement first we print key using i.first then value
    cout <<"Printing elements before inserting:" << endl;
    for (auto i : m){
        cout << i.first << "  "<< i.second  << endl;
     }

     m.insert({4,"Jia"});
    cout <<"Printing elements after inserting:" << endl;
        for (auto i : m){
        cout << i.first << "  "<< i.second  << endl;
     }
     cout << m[1]; // we can find the values with the help of key

}