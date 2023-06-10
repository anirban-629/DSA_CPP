#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *next;
};

class Stack{
private:
    node *top;
public:
    Stack(){top=NULL;}
    void push(int x);
    void pop();
    void display();
};


int main(){
    Stack s;
    s.push(10);
    s.push(15);
    s.push(20);
    s.push(25);
    s.display();
    s.pop();
    s.display();
    return 0;
}

void Stack::push(int x){
    node *t=new node;
    if(t==NULL){
        cout<<"StackOverflow";
    }
    else{
        t->data=x;
        t->next=top;
        top=t;
    }

}
void Stack::pop(){
    if(top==NULL){
        cout<<"StackUnderflow";
    }
    else{
        node *t;
        t=top;
        top=top->next;
        delete t;
    }
}
void Stack::display(){
    if(top==NULL){
        cout<<"Stack is Empty.. StackUnderflow!!";
    }
    else{
        cout<<endl;
        node *t=top;
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
}



