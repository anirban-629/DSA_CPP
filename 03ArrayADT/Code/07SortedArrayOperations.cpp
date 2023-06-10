#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
bool isSorted(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return false;
        }
    }
    return true;
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void changePosition(int *arr, int size)
{
    int i = 0, j = size - 1;
    while (i < j)
    {
        while (arr[i] < 0)
        {
            i++;
        }
        while (arr[j] >= 0)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
}

int main()
{

    // int arr[] = {4, 8, 13, 16, 20, 25, 28, 33};
    // int arr[] = {-4, -8, 13, 16, -20, 25, 28, -33};
    // cout << isSorted(arr, 8);
    int arr1[] = {0, 1, -2, 3, 4, -5, 6, 7, -8, 9};
    changePosition(arr1, 10);
    display(arr1, 10);
    return 0;
}