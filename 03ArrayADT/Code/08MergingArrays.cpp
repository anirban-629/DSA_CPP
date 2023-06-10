#include <iostream>
using namespace std;

void MergingTwoArrays(int *A, int *B, int *C, int m, int n)
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (A[i] > B[j])
        {
            C[k++] = B[j++];
        }
        else
        {
            C[k++] = A[i++];
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

int main()
{
    int m = 4, n = 4;
    int A[] = {1, 3, 5, 7};
    int B[] = {2, 4, 6, 8};
    int C[m + n];
    MergingTwoArrays(A, B, C, m, n);
    for (auto &&i : C)
    {
        cout << i << " ";
    }

    return 0;
}