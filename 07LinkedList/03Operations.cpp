#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *HEAD = NULL;
typedef struct Node node;

// ? Operations
void CreateL(int arr[], int n);
void Display(node *p);
int Count(node *temp);
int CountR(node *temp);
int Sum(node *temp);
int MaxNumber(node *temp);
int MaxNumberR(node *temp);
int MaxNumberR2(node *temp);
string Search(node *temp, int ele);
string SearchR(node *temp, int ele);
node *ImprovedSearch(node *temp, int ele);
node *InsertAtFirst(int ele);
node *InsertAtIndex(int index, int ele);
node *InsertAtAnywhere(int index, int ele);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    CreateL(arr, 5);
    cout << "Display(): ";
    Display(HEAD);
    cout << endl
         << "-------------------------------------" << endl;

    cout << "Count(): " << Count(HEAD) << endl
         << "CountRecursive(): " << CountR(HEAD) << endl
         << "Sum(): " << Sum(HEAD) << endl
         << "MaxNumber(): " << MaxNumber(HEAD) << endl
         << "MaxNumberRecursive(): " << MaxNumberR(HEAD) << endl
         << "MaxNumberRecursive2(): " << MaxNumberR(HEAD) << endl
         << "Search(5): " << Search(HEAD, 5) << endl
         << "SearchR(40): " << SearchR(HEAD, 40);
    cout << endl
         << "-------------------------------------" << endl;

    cout << "ImprovedSearch(5): ";
    node *var1 = ImprovedSearch(HEAD, 5);
    cout << var1->data << endl
         << "Display(): ";
    Display(var1);
    cout << endl
         << "-------------------------------------" << endl;

    cout << "InsertAtFirst(6): " << endl;
    node *var2 = InsertAtFirst(6);
    cout << "Display(): ";
    Display(var2);
    cout << endl
         << "-------------------------------------" << endl;

    cout << "InsertAtIndex(2,2): " << endl;
    node *var3 = InsertAtIndex(2, 2);
    cout << "Display(): ";
    Display(HEAD);
    cout << endl
         << "-------------------------------------" << endl;

    cout << "Count(): " << Count(HEAD) << endl
         << "Display(): ";
    Display(HEAD);
    cout << endl
         << "-------------------------------------" << endl;

    cout << "InsertAtAnywhere(0, -155)" << endl
         << "InsertAtAnywhere(0, -255)" << endl
         << "InsertAtAnywhere(Count(HEAD), 5000)";
    node *var4 = InsertAtAnywhere(0, -155);
    node *var5 = InsertAtAnywhere(0, -255);
    node *var6 = InsertAtAnywhere(Count(HEAD), 5000);
    cout << endl
         << "-------------------------------------" << endl;

    cout << "Display(): ";
    Display(HEAD);
    cout << endl
         << "-------------------------------------" << endl;

    return 0;
}

void CreateL(int arr[], int n)
{
    HEAD = new Node;
    HEAD->data = arr[0];
    HEAD->next = NULL;
    node *t, *last;
    last = HEAD;
    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = arr[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void Display(node *temp)
{
    if (temp != NULL)
    {
        cout << temp->data << " ";
        Display(temp->next);
    }
}

int Count(node *temp)
{
    int i = 0;
    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }
    return i;
}

int CountR(node *temp)
{
    if (temp == NULL)
    {
        return 0;
    }
    else
    {
        return CountR(temp->next) + 1;
    }
    return -1;
}

int Sum(node *temp)
{
    if (temp == NULL)
    {
        return 0;
    }
    return Sum(temp->next) + temp->data;
}

int MaxNumber(node *temp)
{
    int m = INT_MIN;
    while (temp)
    {
        if (temp->data > m)
        {
            m = temp->data;
        }
        temp = temp->next;
    }
    return m;
}

int MaxNumberR(node *temp)
{
    int x = 0;
    if (temp == NULL)
    {
        return INT_MIN;
    }
    else
    {
        x = MaxNumber(temp->next);
        if (x > temp->data)
        {
            return x;
        }
        else
        {
            return temp->data;
        }
    }
}

int MaxNumberR2(node *temp)
{
    int x = 0;
    if (temp == NULL)
    {
        return INT_MIN;
    }
    x = MaxNumberR2(temp->next);
    return (x > temp->data ? x : temp->data);
}

string Search(node *temp, int ele)
{
    if (temp == NULL)
    {
        return "No Elements are Present";
    }
    while (temp != NULL)
    {
        if (temp->data == ele)
        {
            return "Found";
        }
        temp = temp->next;
    }
    return "Not Found";
}

string SearchR(node *temp, int ele)
{
    if (temp == NULL)
    {
        return "Not Found";
    }
    else
    {
        if (temp->data == ele)
        {
            return "Found";
        }
        return Search(temp->next, ele);
    }
}

node *ImprovedSearch(node *temp, int ele)
{
    node *q = NULL;
    while (temp != NULL)
    {
        if (temp->data == ele)
        {
            q->next = temp->next;
            temp->next = HEAD;
            HEAD = temp;
            return temp;
        }
        q = temp;
        temp = temp->next;
    }
    return NULL;
}

node *InsertAtFirst(int ele)
{
    node *n = new node;
    n->data = ele;
    n->next = HEAD;
    HEAD = n;
    return HEAD;
    // ? Complexity O(1)
}

node *InsertAtIndex(int index, int ele)
{ // Don't work in case of 0;
    int size = Count(HEAD);
    if (index > size)
    {
        return NULL;
    }
    node *t = new node, *q = HEAD;
    t->data = ele;
    int i = 0;
    while (i < index - 1)
    {
        q = q->next;
        i++;
    }
    t->next = q->next;
    q->next = t;
    return HEAD;
    // ? Complexity min - O(1)
    // ? Complexity max - O(n)
}

node *InsertAtAnywhere(int index, int ele)
{
    node *t, *q;
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
        int i = 0;
        q = HEAD;
        while (i < index - 1 && q)
        {
            q = q->next;
            i++;
        }
        t = new node;
        t->data = ele;
        t->next = q->next;
        q->next = t;
        return HEAD;
    }
    return NULL;
}

