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

node *concatLL(node *p, node *q)
{
    node *temp = p;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = q;
    q = NULL;
    return p;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 4, 5, 5, 6};
    int arr2[] = {7, 8, 9, 10, 10, 11, 11, 12};
    node *ll1 = createLinkedList(arr1, 8);
    node *ll2 = createLinkedList(arr2, 8);
    Display(ll1);
    cout << endl;
    Display(ll2);
    node *concatedLL = concatLL(ll1, ll2);
    cout << endl;
    Display(concatedLL);
    return 0;
}