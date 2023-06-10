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
        int countNode(node *p);
        void insertInPosition(int ele,int ind);
};


int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int len=sizeof(arr)/sizeof(int);
    CircularLinkedList c;
    node *p=c.createCircularLinkedList(arr,len);
    c.insertInPosition(555,10);
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

int CircularLinkedList::countNode(node *p){
    int count_=1;
    do{
        count_++;
        p=p->next;
    }while(p!=HEAD);
    return count_;
}

void CircularLinkedList::insertInPosition(int ele,int ind){
    node *t,*p=HEAD;
    if(ind>countNode(p) || ind<0){
        cout<<"Invalid Index!"<<endl;
        return;
    }
    if(ind==0){
        t=new node;
        t->data=ele;
        if(HEAD==NULL){
            HEAD=t;
            HEAD->next=HEAD;
        }
        else{
            while(p->next!=HEAD) p=p->next;
            p->next=t;
            t->next=HEAD;
            HEAD=t;
        }
    }
    else{
        t=new node;
        t->data=ele;
        for(int i=0;i<ind-1;i++)p=p->next;
        t->next=p->next;
        p->next=t;
    }
}
