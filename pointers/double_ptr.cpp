#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *p = &x;
    int **pp = &p;

    cout <<"x = " << x << endl;
    cout << "p = " << *p << endl;
    cout << "pp = " << **pp << endl;

    **pp = 20;

    cout <<"After Modify pp x = " << x << endl;

    return 0;
}