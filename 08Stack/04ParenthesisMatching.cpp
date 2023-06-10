#include<iostream>
using namespace std;

class node
{
public:
    char data;
    node *next;
};

class Stack
{
private:
    node *top;
public:
    Stack()
    {
        top=NULL;
    }
    void push(int x);
    char pop();
    void display();
    bool isBalanced(char *exp);
};


int main()
{
    Stack s;
    char *exp="(a+b)";
    cout<<s.isBalanced(exp);
    return 0;
}

void Stack::push(int x)
{
    node *t=new node;
    if(t==NULL)
    {
        cout<<"StackOverflow";
    }
    else
    {
        t->data=x;
        t->next=top;
        top=t;
    }

}
char Stack::pop()
{
    if(top==NULL)
    {
        cout<<"StackUnderflow";
        return '-';
    }
    node *t;
    t=top;
    int x=t->data;
    top=top->next;
    delete t;
    return x;
}
void Stack::display()
{
    if(top==NULL)
    {
        cout<<"Stack is Empty.. StackUnderflow!!";
    }
    else
    {
        cout<<endl;
        node *t=top;
        for(int i=0; t!=NULL; i++)
        {
            if(i==0)
            {
                cout<<"|"<<t->data<<"| <- TOP"<<endl;
            }
            else
            {
                cout<<"|"<<t->data<<"|"<<endl;
            }
            t=t->next;
        }
        cout<<endl;
    }
}
bool Stack::isBalanced(char *exp)
{
    for(int i=0; exp[i]; i++)
    {
        if(exp[i]=='(')
        {
            push(exp[i]);
        }
//        else if(exp[i]==')'||exp[i]=='}'||exp[i]==']')
        else if(exp[i]==')')
        {
//            char closeSymbol= exp[i]==')'?int(exp[i])+1:int(exp[i])+2;
//            cout<<closeSymbol<<endl;
            if(top==NULL)
            {
                return false;
            }
            int temp=pop();
        }
    }
    if(top==NULL)
        return true;
    else
        return false;

}


