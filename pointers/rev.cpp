#include<iostream>
using  namespace std;
void rev(int *arr, int n){
  int *start = arr;
  int *end = arr+n-1;
  while(start < end){
    swap(*start, *end);
    start++;
    end--;
  }
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    rev(arr, n);
    cout << "Reverse array : " ;
    for(int i = 0; i < n; i++) 
    cout << arr[i] << " " ;
return 0;
}