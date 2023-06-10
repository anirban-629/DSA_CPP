#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *HEAD = NULL;
typedef Node node;

node *createLinkedList(int arr[], int size)
{
    int i = 0;
    HEAD = new node;
    HEAD->data = arr[i++];
    HEAD->next = NULL;
    node *t, *last = HEAD;
    while (i < size)
    {
        t = new node;
        last->next = t;
        t->data = arr[i++];
        t->next = NULL;
        last = t;
    }
    return HEAD;
}

void Display(Node *p)
{
    if (p != NULL)
    {
        cout << p->data << " ";
        Display(p->next);
    }
}

node *merge(node *p, node *q)
{
    node *m, *n;
    if (p->data < q->data)
    {
        n = m = p;
        p = p->next;
        n->next = NULL;
    }
    else
    {
        n = m = q;
        q = q->next;
        n->next = NULL;
    }
    while (p && q)
    {
        if (p->data < q->data)
        {
            m->next = p;
            m = p;
            p = p->next;
            m->next = NULL;
        }
        else
        {
            m->next = q;
            m = q;
            q = q->next;
            m->next = NULL;
        }
    }
    if (p)
    {
        m->next = p;
    }
    if (q)
    {
        m->next = q;
    }
    return n;
}

int main()
{
    int arr1[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int arr2[] = {2, 4, 6, 8, 10, 12, 14, 16};
    node *ll1 = createLinkedList(arr1, 8);
    node *ll2 = createLinkedList(arr2, 8);
    Display(ll1);
    cout << endl;
    Display(ll2);
    node *concatedLL = merge(ll1, ll2);
    cout << endl;
    Display(concatedLL);
    return 0;
}