#include <iostream>
#include <stack>
using namespace std;

void print(stack<int>s){
      while (!s.empty()){
          cout << s.top() << " ";
          s.pop();
      }
}

int main (){

    int arr[5] = {3,6,2,56,5};
    stack<int>st ;
    for (int i = 0 ; i < 5 ; i++){
            st.push(arr[i]);
    }
    print(st);

    


}

