#include <iostream>
using namespace std;
typedef struct Array
{
    int A[100];
    int size;
    int length;
} array;

void Display(array a)
{
    for (int i = 0; i < a.length; i++)
    {
        cout << a.A[i] << endl;
    }
}

void Append(array *a, int ele)
{
    if (a->length < a->size)
    {
        a->A[a->length++] = ele;
    }
}
void Insert(array *a, int index, int ele)
{
    int i = 0;
    if (index >= 0 && index <= a->length)
    {
        for (i = a->length; i > index; i--)
        {
        }
        a->A[index] = ele;
        // a->length++;
    }
}
int Delete(array *a, int index)
{
    int x = 0;
    if (index >= 0 && index < a->length)
    {
        x = a->A[index];
        for (int i = index; i < a->length - 1; i++)
        {
            a->A[i] = a->A[i + 1];
        }
        a->length--;
    }
    return x;
}

int main()
{
    // -> Initialization
    int length = 5, size = 10;
    array arr = {{1, 2, 3, 4, 5}, size, length};

    // Append(&arr, 6);
    // Insert(&arr, 3, 7);
    cout << "Deleted Val -> " << Delete(&arr, 3) << endl;

    // -> Display
    Display(arr);
    return 0;
}