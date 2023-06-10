#include <iostream>
using namespace std;
bool LinearSearch(int *arr, int length, int key)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};
    cout << LinearSearch(arr, 17, 102);

    return 0;
}