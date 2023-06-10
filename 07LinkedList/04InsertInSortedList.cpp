#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *HEAD = NULL;
typedef struct Node node;

void CreateLinkedList(int arr[], int size)
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
}

void DisplayLinkedList()
{
    node *temp = HEAD;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void INSERT(int ele)
{
    node *t, *p, *q;
    p = HEAD;
    while (p && p->data < ele)
    {
        q = p;
        p = p->next;
    }
    t = new node;
    t->data = ele;
    t->next = q->next;
    q->next = t;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    CreateLinkedList(arr, 6);
    DisplayLinkedList();
    cout << endl;
    INSERT(4);
    DisplayLinkedList();
    return 0;
}