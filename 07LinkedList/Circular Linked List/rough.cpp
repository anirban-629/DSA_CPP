// #include <iostream>
// using namespace std;

// struct Node
// {
//     int data;
//     struct Node *next;
// } *HEAD = NULL;
// typedef struct Node node;

// node *createCLL(int arr[], int size);
// void display(node *p);
// node *insert(int ele, int pos);

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     node *cll1 = createCLL(arr, 5);
//     display(cll1);
//     node *cll2 = insert(0, 0);
//     cout << endl;
//     display(cll2);
//     return 0;
// }

// node *createCLL(int arr[], int size)
// {
//     node *t, *temp;
//     int i = 0;
//     HEAD = new node;
//     HEAD->data = arr[i++];
//     HEAD->next = NULL;
//     temp = HEAD;
//     while (i < size)
//     {
//         t = new node;
//         t->data = arr[i++];
//         t->next = NULL;
//         temp->next = t;
//         temp = t;
//     }
//     temp->next = HEAD;
//     return HEAD;
// }

// void display(node *p)
// {
//     node *temp = p;
//     do
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     } while (temp != p);
// }

// node *insert(int ele, int pos)
// {
//     node *t, *p;
//     t = new Node;
//     if (pos == 0)
//     {
//         t->data = ele;
//         if (HEAD == NULL)
//         {
//             HEAD = t;
//             HEAD->next = HEAD;
//             return HEAD;
//         }
//         else
//         {
//             p = HEAD;
//             while (p->next != HEAD)
//             {
//                 p = p->next;
//             }
//             p->next = t;
//             t->next = HEAD;
//             HEAD = t;
//             return HEAD;
//         }
//     }

//     p = HEAD;
//     t->data = ele;
//     for (int i = 0; i < pos - 1; i++)
//     {
//         p = p->next;
//     }
//     t->next = p->next;
//     p->next = t;
//     return HEAD;
// }

#include <iostream>
using namespace std;
int main()
{
    cout << "HELLO WORLD";
    return 0;
}