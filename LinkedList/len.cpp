#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};

int getLen(struct Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp -> next;;
    }
    return count;
}

int main(){
    struct Node* head = (struct Node*) malloc(sizeof(struct Node));
    struct Node* first = (struct Node*) malloc(sizeof(struct Node));
    struct Node* sec = (struct Node*) malloc(sizeof(struct Node));
    
    head -> data = 10;
    head -> next = first;

    first ->data = 20;
    first -> next = sec;

    sec -> data = 30;
    sec -> next = NULL;

    cout << "lenth: " << getLen(head) << endl;
}