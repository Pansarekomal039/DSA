#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size: " ;
    cin >> n;
    int *arr = new int[n];
    cout << "Enter elements";
    for(int i = 0; i < n; i++)
    cin >> *(arr+i);
    cout << "Values are: ";
    for(int i = 0; i < n; i++)
    cout << *(arr+i) << " " ;   
    delete[] arr;
    arr = NULL;
    return 0;
}