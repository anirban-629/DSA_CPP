#include<iostream>
using namespace std;

typedef struct Stack{
    int size_;
    int top;
    int *arr;
}St;

int isFull(St *s);
int isEmpty(St *s);
void display(St *s);
void push(St *s,int ele);
int pop(St *s);
int stackTop(St *s);
int peek(St *s,int ind);

int main(){
    St *s;
    cout<<"Enter the Size of Array: ";
    cin>>s->size_;
    s->top=-1;
    s->arr=new int(s->size_);
    push(s,10);
    push(s,20);
    push(s,30);
    push(s,40);
    push(s,50);
    push(s,60);
    push(s,70);
    push(s,80);
    display(s);
    int x=pop(s);
    cout<<"Popped Element - "<<x<<endl;
    display(s);
    int y=stackTop(s);
    cout<<"Stack Top is pointing on - "<<y<<endl;
    int z=peek(s,3);
    cout<<"peeking index val - "<<z<<endl;
}

int isFull(St *s){
    if(s->top==(s->size_-1)){
        return 1;
    }
    return 0;
}
int isEmpty(St *s){
    if(s->top==-1){
        return 1;
    }
    return 0;
}
void display(St *s){
    cout<<endl;
    if(isEmpty(s)){
        cout<<"Empty Array!!!";
        return;
    }
    for(int i=s->top;i>=0;i--){
        if(i==s->top){
            cout<<"|"<<s->arr[i]<<"|"<<" <- TOP"<<endl;
        }
        else{
            cout<<"|"<<s->arr[i]<<"|"<<endl;
        }
    }
    cout<<endl;
}
void push(St *s,int ele){
    if(isFull(s)){
        cout<<"StackOverflow! Failed to Push -> "<<ele<<endl ;
        return;
    }
    s->top++;
    s->arr[s->top]=ele;
}
int pop(St *s){
    if(isEmpty(s)){
        cout<<"StackUnderflow! Failed to Pop"<<endl ;
        return -1;
    }
    return s->arr[s->top--];
}
int stackTop(St *s){
    if(isEmpty(s)){
        return -1;
    }
    return s->arr[s->top];
}
int peek(St *s,int ind){
    if(s->top-ind+1<0){
        return -1;
    }
    return s->arr[s->top-ind+1];
}

