#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;
typedef Node Node;

void createLinkedList(int arr[], int n)
{
    int i;
    Node *t, *last;
    first = new Node;
    first->data = arr[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new Node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
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

int main()
{

    Node *p;
    int arr[] = {1, 2, 3, 4, 5};
    createLinkedList(arr, 5);
    Display(first);
    return 0;
}