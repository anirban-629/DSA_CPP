#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *HEAD = NULL;
typedef Node node;

void createLinkedList(int ele)
{
    HEAD = new node;
    HEAD->data = ele;
    HEAD->next = NULL;
}
void DisplayLinkedList()
{
    node *temp = HEAD;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
node *Insert(int index, int ele)
{
    node *t, *temp;
    if (index == 0)
    {
        t = new node;
        t->data = ele;
        t->next = HEAD;
        HEAD = t;
        return HEAD;
    }
    else if (index > 0)
    {
        temp = HEAD;
        int i = 0;
        while (i < index - 1 && temp)
        {
            temp = temp->next;
            i++;
        }
        t = new node;
        t->data = ele;
        t->next = temp->next;
        temp->next = t;
        return HEAD;
    }
    return NULL;
}


int main()
{
    createLinkedList(10);
    node *var1 = Insert(0, 20);
    node *var2 = Insert(1, 30);
    DisplayLinkedList();
    return 0;
}