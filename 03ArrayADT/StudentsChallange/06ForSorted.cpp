// -> Sum of 2 numbers in array is equal to somoe number given

#include <iostream>
using namespace std;

void stuartChallangeSorted(int arr[], int n, int x)
{
    int i = 0, j = n - 1;
    while (i < j)
    {
        if (arr[i] + arr[j] == x)
        {
            cout << "Pair -> (" << arr[i] << ", " << arr[j] << ")" << endl;
            i++, j--;
        }
        else if (arr[i] + arr[j] < x)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
}

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    stuartChallangeSorted(arr, 10, 10);
    return 0;
}