#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *HEAD = NULL;
typedef Node node;

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

void DisplayLinkedList(node *p)
{
    node *temp = p;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void DeleteNode(int index)
{
    if (index == 1)
    {
        HEAD = HEAD->next;
        return;
    }

    node *p = HEAD, *q = NULL;
    int i = 0;
    while (i < index - 1)
    {
        q = p; 
        p = p->next;
        i++;
    }
    q->next = p->next;
    delete p;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    CreateLinkedList(arr, 6);
    DisplayLinkedList(HEAD);
    cout << endl;
    DeleteNode(3);
    DisplayLinkedList(HEAD);
    return 0;
}