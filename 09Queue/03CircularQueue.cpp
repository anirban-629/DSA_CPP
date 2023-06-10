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
        f=r=0;
        arr=new int[this->size_];
    }
    int isFull()
    {
        return (r+1)%size_==f;
    }
    int isEmpty()
    {
        return f==r;
    }
    void display()
    {
        int i=f+1;
        do{
            cout<<arr[i]<<" ";
            i=(i+1)%size_;
        }while(i!=(r+1)%size_);
        cout<<endl;
    }

    void enqueue(int ele)
    {
        if(isFull())
        {
            cout<<"OverFlow"<<endl;
            return;
        }
        r=(r+1)%size_;
        arr[r]=ele;
        cout<<ele<<" Enqueue Successfull"<<endl;
    }
    void dequeue()
    {
        if(isEmpty())
        {
            cout<<"UnderFlow"<<endl;
            return;
        }
        f=(f+1)%size_;
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
    q.enqueue(30);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
    q.enqueue(30);
    q.enqueue(50);    q.enqueue(50);    q.enqueue(50);    q.enqueue(50);    q.enqueue(50);    q.enqueue(50);    q.enqueue(50);    q.enqueue(50);    q.enqueue(50);    q.enqueue(50);    q.enqueue(50);
    q.display();
    return 0;
}




