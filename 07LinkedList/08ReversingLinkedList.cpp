#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *HEAD = NULL;
typedef Node node;

void createLinkedList(int arr[], int size)
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
}

void Display(Node *p)
{
    if (p != NULL)
    {
        cout << p->data << " ";
        Display(p->next);
    }
}

void reverseLinkedList()
{
    // ? SLIDING Pointers
    node *p = HEAD, *q = NULL, *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    HEAD = q;
}

int main()
{
    // ? SLIDING METHOD
    int arr[] = {1, 2, 3, 4, 4, 5, 5, 6};
    createLinkedList(arr, 8);
    Display(HEAD);
    reverseLinkedList();
    cout << endl;
    Display(HEAD);
    return 0;
}