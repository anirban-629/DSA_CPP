// -> Sum of 2 numbers in array is equal to somoe number given

#include <iostream>
using namespace std;

void stuartChallange(int arr[], int n, int x)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                cout << "Pair -> (" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    stuartChallange(arr, 10, 10);
    return 0;
}