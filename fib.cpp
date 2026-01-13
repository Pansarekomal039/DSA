#include<vector>
#include<iostream>
using namespace std;
int fib(int n){
    if(n <= 0) 
    return 0;
    if(n == 1)
    return 1;
    vector<int> fib(n+1);
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i <= n; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    return fib[n];
}

int main(){
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    cout << "Fibonacci of " << n << " is: " << fib(n) << endl;
    return 0;
}