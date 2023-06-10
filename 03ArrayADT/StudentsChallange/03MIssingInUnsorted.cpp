#include <iostream>
using namespace std;

void Method(int arr[], int s, int e)
{
    int demo[e] = {0};
    for (int i = 0; i < e; i++)
    {
        demo[arr[i]]++;
    }

    for (int j = 0; j <= e; j++)
    {
        cout << demo[j] << " ";
    }
    // for (int j = 0; j <= e; j++)
    // {
    //     if (demo[j] == 0)
    //     {
    //         cout << "Missing Element: " << j << endl;
    //     }
    // }
}

int main()
{
    int A[] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
    Method(A, 0, 12);
    return 0;
}