#include <iostream>
using namespace std;
// -> Transposition Method
bool LinearSearch1(int *arr, int length, int key)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == key)
        {
            int temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
            return true;
        }
    }
    return false;
}

// -> Move to front/head
bool LinearSearch2(int *arr, int length, int key)
{
    for (int i = 0; i < length; i++)
    {
        if (arr[i] == key)
        {
            int temp = arr[i];
            arr[i] = arr[0];
            arr[0] = temp;
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17};

    // -> Position of 8 is changing from index 7 to index 6
    // cout << arr[7] << endl
    //      << LinearSearch1(arr, 17, 8) << endl
    //      << arr[6] << endl;

    // -> Position of 8 is changing from index 7 to index 0
    cout << arr[7] << endl
         << LinearSearch2(arr, 17, 8) << endl
         << arr[0] << endl;

    return 0;
}