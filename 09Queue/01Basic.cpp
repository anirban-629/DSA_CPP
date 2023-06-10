#include<iostream>
using namespace std;

typedef struct QUEUE{
    int size_;
    int f;
    int r;
    int *arr;
}Queue;

Queue *create(int size_);
int isFull(Queue *q);
int isEmpty(Queue *q);
void display(Queue *q);
void enqueue(Queue *q,int ele);
void dequeue(Queue *q);

int main(){
    Queue *q=create(10);
    enqueue(q,1);
    enqueue(q,2);
    enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);
    enqueue(q,6);
    display(q);
    dequeue(q);
    dequeue(q);
    dequeue(q);
    display(q);
    return 0;
}

Queue *create(int size_){
    Queue *q=new Queue;
    q->size_=size_;
    q->f=q->r=-1;
    q->arr=new int[size_];
    return q;
}
int isFull(Queue *q){
    return q->r==q->size_-1;
}
int isEmpty(Queue *q){
    return q->f==q->r;
}
void display(Queue *q){
    for(int i=q->f+1;i<=q->r;i++){
        cout<<q->arr[i]<<" ";
    }
    cout<<endl;
}
void enqueue(Queue *q,int ele){
    if(isFull(q)){
        cout<<"OverFlow";
        return;
    }
//    q->r++;
//    q->arr[q->r]=ele;
    q->arr[++q->r]=ele;
}
void dequeue(Queue *q){
    if(isEmpty(q)){
        cout<<"UnderFlow";
        return;
    }
    q->f++;
    int x=q->arr[q->f];
    cout<<x<<" Dequeue Successfull"<<endl;
}









