// -> Sorted Array

#include <iostream>
using namespace std;

void duplicateNum(int arr[], int size)
{
    int lastDuplicate = 0, j = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            j = i + 1;
            while (arr[j] == arr[i])
                j++;
            cout << arr[i] << " is appearing " << j - i << " times" << endl;
            i = j - 1;
        }
    }
}

int main()
{
    int arr[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    cout << "Number of Duplicates -> " << endl;
    duplicateNum(arr, 10);
    return 0;
}