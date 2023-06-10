#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
}*HEAD=NULL;
typedef Node node;

class CircularLinkedList{
    public:
        node* createCircularLinkedList(int arr[],int len);
        void display(node* p);
        void deletion(int ind);
        void deletion(node *p);
};

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(int);
    CircularLinkedList c;
    node *p=c.createCircularLinkedList(arr,len);
    c.display(HEAD);
    cout<<endl;
    //c.deletion(3);
    c.deletion(HEAD);
    c.display(HEAD);
    return 0;
}

node* CircularLinkedList::createCircularLinkedList(int arr[],int len){
    node *last,*t;
    HEAD=new node;
    HEAD->data=arr[0];
    HEAD->next=HEAD;
    last=HEAD;
    int i=1;
    while(i<len){
        t=new node;
        t->data=arr[i++];
        t->next=last->next;
        last->next=t;
        last=t;
    }
    return HEAD;
}

void CircularLinkedList::display(node *p){
    static int flag=0;
    if(p!=HEAD || flag==0){
        flag=1;
        cout<<p->data<<" ";
        display(p->next);
    }
    flag=0;
}

void CircularLinkedList::deletion(node *p){
    do{
        p=p->next;
    }while(p->next!=HEAD);
    p->next=HEAD->next;
    delete HEAD;
    HEAD=p->next;
}

void CircularLinkedList::deletion(int ind){
    node *p=HEAD,*q;
    for(int i=0;i<ind-1;i++) p=p->next;
    q=p->next;
    p->next=q->next;
    delete q;
}

