#include<iostream>
using namespace std;

struct Node{
    struct Node *prev;
    int data;
    struct Node *next;
}*HEAD=NULL;
typedef Node node;

class doublyLinkedList{
public:
    node* create(int arr[],int len);
    void display(node *p);
    int count_(node *p);
    void deletion(node *p);
    void deletion(int ind);
};

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(int);
    doublyLinkedList dl;
    node *p=dl.create(arr,len);
    dl.display(HEAD);
    dl.deletion(4);
    cout<<endl;
    dl.display(HEAD);
    return 0;
}

node* doublyLinkedList::create(int arr[],int len){
    int i=0;
    node *t,*last;
    HEAD=new node;
    HEAD->data=arr[i++];
    HEAD->prev=HEAD->next=NULL;
    last=HEAD;
    for(;i<len;i++){
        t=new node;
        t->data=arr[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
    return HEAD;
}

void doublyLinkedList::display(node *p){
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
}

int doublyLinkedList::count_(node *p){
    int n=1;
    do{
        n++;
        p=p->next;
    }while(p->next!=NULL);
    return n;
}

void doublyLinkedList::deletion(node *p){
    p=p->next;
    delete HEAD;
    HEAD=p;
}

void doublyLinkedList::deletion(int ind){
    if(ind>=count_(HEAD)){
        cout<<endl<<"INVALID INDEX!"<<endl;
    }
    else if(ind==0){
        deletion(HEAD);
    }
    else{
        node *p,*q,*temp;
        p=q=HEAD;
        int i=0;
        while(i++<ind-1){
            p=p->next;
            q=q->next;
        }
        q=q->next;
        if(ind==count_(HEAD)-1){
            p->next=NULL;
            delete q;
        }
        else{
            p->next=q->next;
            temp=q;
            q=q->next;
            delete temp;
            q->prev=p;
        }
    }
}
