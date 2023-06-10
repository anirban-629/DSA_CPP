#include<iostream>
using namespace std;

typedef struct Node{
    int ele;
    struct Node *next;
}node;

class Queue{
private:
    node *f;
    node *r;
public:
    Queue(){
        node *q;
        this->f=this->r=NULL;
        cout<<"An Empty Queue is Created Now... Insert Elements!"<<endl;
    }
    bool isEmpty(){
        return f==NULL?true:false;
    }
    void enqueue(int ele){
        node *t=new node;
        if(t==NULL)cout<<"QUEUE IS FULL"<<endl;
        else{
            t->ele=ele;
            t->next=NULL;
            if(f==NULL)f=r=t;
            else{
                r->next=t;
                r=t;
            }
            cout<<"Enqueue Successfull("<<ele<<")"<<endl;
        }
    }
    void dequeue(){
        if(isEmpty())cout<<"QUEUE IS EMPTY";
        else{
            node *p=f;
            f=f->next;
            cout<<"Dequeue Successfull("<<p->ele<<")"<<endl;
            delete p;
        }
    }
    void display(){
        node *p=f;
        while(p){
            cout<<"|"<<p->ele<<"| ";
            p=p->next;
        }
        cout<<endl;
    }
};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    q.enqueue(80);
    q.enqueue(90);
    q.enqueue(100);
    q.display();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
    return 0;
}
