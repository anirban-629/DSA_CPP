#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void ReverseArray(int *arr, int size)
{
    int B[size];
    for (int i = size - 1, j = 0; i >= 0; i--, j++)
    {
        B[j] = arr[i];
    }
    for (int i = 0; i >= 0; i++)
    {
        arr[i] = B[i];
    }
}

int main()
{
    int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    display(A, 10);
    ReverseArray(A, 10);
    cout << endl
         << "--------------------------------" << endl;
    display(A, 10);
    return 0;
}