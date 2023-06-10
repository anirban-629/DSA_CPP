#include <iostream>
using namespace std;

void stuartChallange(int arr[], int n, int x)
{
    int hash[20] = {0};
    for (size_t i = 0; i < n; i++)
    {
        if (hash[x - arr[i]] != 0)
        {
            cout << "Pair -> (" << arr[i] << ", " << x - arr[i] << ")" << endl;
        }
        hash[arr[i]]++;
    }
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    stuartChallange(arr, 10, 10);
    return 0;
}