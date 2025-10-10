#include<iostream>
using namespace std;
int str(char *s){
    int len = 0;
    while(*s != '\0'){
        len++;
        s++;
    }
    return len;
}

int main(){
    char s[] = "Hello"; 
    cout << "The length of the string is: " << str(s) << endl;
    cout << "The size of the string is: " << sizeof(s) << endl;

    return 0;

}