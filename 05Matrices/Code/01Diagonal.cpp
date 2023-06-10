#include <iostream>
using namespace std;

/*
30000
07000
00400
00090
00006
*/

void setItem(int *arr, int i, int j, int ele)
{
    if (i == j)
    {
        // i-1 because assuming indexing starts from 1
        arr[i - 1] = ele;
    }
    else
    {
        cout << "Not a diagonal element";
    }
}

int getItem(int *arr, int i, int j)
{
    if (i == j)
    {
        return arr[i - 1];
    }
    return 0;
}

int main()
{
    int arr[5];

    setItem(arr, 1, 1, 3);
    setItem(arr, 2, 2, 7);
    setItem(arr, 3, 3, 4);
    setItem(arr, 4, 4, 9);
    setItem(arr, 5, 5, 6);

    for (size_t i = 1; i <= 5; i++)
    {
        for (size_t j = 1; j <= 5; j++)
        {
            cout << getItem(arr, i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}
