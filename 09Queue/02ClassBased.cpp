#include<iostream>
using namespace std;

class Queue
{
private:
    int size_;
    int f;
    int r;
    int *arr;
public:
    Queue(int size_)
    {
        this->size_=size_;
        f=r=-1;
        arr=new int[this->size_];
    }
    int isFull()
    {
        return r==size_-1;
    }
    int isEmpty()
    {
        return f==r;
    }
    void display()
    {
        for(int i=f+1; i<=r; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    void enqueue(int ele)
    {
        if(isFull())
        {
            cout<<"OverFlow";
            return;
        }
        //    q->r++;
        //    q->arr[q->r]=ele;
        arr[++r]=ele;
    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"UnderFlow";
            return;
        }
        f++;
        int x=arr[f];
        cout<<x<<" Dequeue Successfull"<<endl;
    }
};

int main()
{
    Queue q(10);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
    return 0;
}




