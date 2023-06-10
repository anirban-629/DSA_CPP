#include <iostream>
using namespace std;

void MinMax(int arr[], int n)
{
    int min = arr[0];
    int max = arr[0];

    for (size_t i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
        else if (arr[i] > max)
            max = arr[i];
    }
    cout << "MINIMUM -> " << min << endl
         << "MAXIMUM -> " << max << endl;
}

int main()
{
    int arr[] = {5, 8, 3, 9, 6, 2, 10, 7, -1, 4};
    MinMax(arr, 10);
    return 0;
}