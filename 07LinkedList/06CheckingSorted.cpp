#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *HEAD = NULL;
typedef Node node;

node *CreateLinkedList(int arr[], int size)
{
    node *t, *LAST;

    HEAD = new node;
    HEAD->data = arr[0];
    HEAD->next = NULL;
    LAST = HEAD;
    for (int i = 1; i < size; i++)
    {
        t = new node;
        t->data = arr[i];
        LAST->next = t;
        t->next = NULL;
        LAST = t;
    }
    return HEAD;
}

void DisplayLinkedList(node *p)
{
    node *temp = p;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

bool checkSorted(node *p)
{
    int x = INT32_MIN;
    while (p)
    {
        if (p->data < x)
        {
            return false;
        }
        x = p->data;
        p = p->next;
    }
    return true;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 4, 5, 6};
    int arr2[] = {6, 5, 4, 3, 2, 1};

    node *ll1 = CreateLinkedList(arr1, 6);
    node *ll2 = CreateLinkedList(arr2, 6);

    DisplayLinkedList(ll1);
    cout << endl;
    DisplayLinkedList(ll2);

    cout << endl
         << checkSorted(ll1) << endl
         << checkSorted(ll2);
    return 0;
}