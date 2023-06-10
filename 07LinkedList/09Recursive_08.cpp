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

void recursiveReverse(node *q, node *p)
{
    if (p)
    {
        recursiveReverse(p, p->next);
        p->next = q;
    }
    else
    {
        HEAD = q;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 4, 5, 5, 6};
    node *ll1 = createLinkedList(arr, 8);
    Display(ll1);
    return 0;
}