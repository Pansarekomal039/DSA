#include<iostream>
using namespace std;

    void greet(){
        cout << "Hello" ;
    }

    void call(void (*callback)()){
        cout << "Callback : ";
        callback();
    }
    int main(){
      call(greet);
      return 0;
    }