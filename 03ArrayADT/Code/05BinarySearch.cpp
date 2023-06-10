// -> Array must be sorted
#include <iostream>
using namespace std;

int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

int BinarySearchIterative(int l, int h, int key)
{

    int mid;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int BinarySearchRecursive(int A[], int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == A[mid])
        {
            return mid;
        }
        else if (key < A[mid])
        {
            return BinarySearchRecursive(A, l, mid - 1, key);
        }
        else
        {
            return BinarySearchRecursive(A, mid + 1, h, key);
        }
    }
    return -1;
}

int main()
{
    // cout << BinarySearchIterative(0, 12, 10) << endl;
    int RBIN[] = {1, 2, 3, 4};
    cout << BinarySearchRecursive(RBIN, 0, 3, 4);
    return 0;
}