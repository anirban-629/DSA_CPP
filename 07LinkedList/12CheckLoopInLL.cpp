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

bool isLooped(node *f)
{
    node *p, *q;
    p = q = f;
    do
    {
        p = p->next;
        q = q->next;
        q = q ? q->next : q;
    } while (q && q && p != q);
    return (p == q) ? true : false;
}

int main()
{
    int arr1[] = {1, 3, 5, 7, 9, 11};
    int arr2[] = {1, 3, 5, 7, 9, 11};
    node *ll1 = createLinkedList(arr1, 6);
    node *ll2 = createLinkedList(arr2, 6);

    // ! LOOP
    node *t1, *t2;
    t1 = ll1->next->next->next;
    t2 = ll1->next->next->next->next->next;
    t2->next = t1;

    cout << isLooped(ll1)
         << endl
         << isLooped(ll2);
    return 0;
}