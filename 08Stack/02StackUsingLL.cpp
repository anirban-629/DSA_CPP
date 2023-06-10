#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*TOP=NULL;
typedef struct node node;

void push(int x){
    node *t=new node;
    if(t==NULL){
        cout<<"StackOverflow!";
        return;
    }
    t->data=x;
    t->next=TOP;
    TOP=t;
}

void display(){
    node *t=TOP;
    cout<<endl;
    for(int i=0;t!=NULL;i++){
        if(i==0){
            cout<<"|"<<t->data<<"| <- TOP"<<endl;
        }
        else{
            cout<<"|"<<t->data<<"|"<<endl;
        }
        t=t->next;
    }
    cout<<endl;
}

void pop(){
    if(TOP==NULL){
        cout<<"StackUnderflow!";
        return;
    }
    node *t=TOP;
    TOP=TOP->next;
    delete t;
}

int main(){
    int n;
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    display();
    pop();
    display();
    return 0;
}

