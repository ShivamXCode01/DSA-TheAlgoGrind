/*Quadrant Finder
Input x and y coordinates. Print:

Quadrant I if x>0 and y>0

Quadrant II if x<0 and y>0

Quadrant III if x<0 and y<0

Quadrant IV if x>0 and y<0

“On Axis” if x=0 or y=0*/
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter y coordinate: ";
    cin>>y;
    if(x>0 && y>0){
        cout<<"it id first quadrant.";
    }
    else if(x < 0  && y > 0){
        cout<<"it is second quadrant.";
    }
    else if(x<0 && y<0){
        cout<<"it is third quadrant.";
        
    }
    else if(x>0 && y<0){
        cout<<"it is fourth quadrant.";
    }
    else{
        cout<<"it is orgin.";
    }
    return 0;
}