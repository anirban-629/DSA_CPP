#include <iostream>
using namespace std;

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

// -> Sorted -> O(n)
// -> UnSorted -> O(n^2)

void Union(int *A, int *B, int *C, int m, int n)
{
    // ! AUB
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (A[i] > B[j])
        {
            C[k++] = B[j++];
        }
        else if (A[i] < B[j])
        {
            C[k++] = A[i++];
        }
        else
        {
            C[k++] = A[i++];
            j++;
        }
    }
    for (; i < m; i++)
    {
        C[k++] = B[i];
    }
    for (; j < n; j++)
    {
        C[k++] = B[j];
    }
}
void Intersection(int *A, int *B, int m, int n)
{
    // ! AnB
    int i = 0, j = 0, k = 0;
    int C[2];
    while (i < m && j < n)
    {
        if (A[i] > B[j])
        {
            j++;
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else if (A[i] == B[j])
        {
            C[k++] = A[i++];
            j++;
        }
    }
    for (auto &&i : C)
    {
        cout << i << " ";
    }
}
void Difference(int *A, int *B, int m, int n)
{
    // ! A- B
    int i = 0, j = 0, k = 0;
    int C[3];
    while (i < m && j < n)
    {
        if (A[i] > B[j])
        {
            j++;
        }
        else if (A[i] < B[j])
        {
            C[k++] = A[i++];
        }
        else if (A[i] == B[j])
        {
            i++;
            j++;
        }
    }
    for (; i < m; i++)
    {
        C[k++] = A[i];
    }
    for (auto &&i : C)
    {
        cout << i << " ";
    }
}

int main()
{
    int m = 5, n = 5;
    int A[] = {3, 4, 5, 6, 10};
    int B[] = {2, 4, 5, 7, 12};
    // int C[m + n];
    // Union(A, B, C, m, n);
    // display(C, m + n);
    // Intersection(A, B, m, n);
    Difference(A, B, m, n);
    return 0;
}
