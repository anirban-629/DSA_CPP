
#include <iostream>
using namespace std;

// Missing single element in the sorted array
// clue -> sum of first n natural numbers -> (n(n+1)/2)
int Method1(int arr[], int size)
{
    int ESum = arr[size - 1] * (arr[size - 1] + 1) / 2;
    int ASum = 0;
    for (int i = 0; i < size; i++)
    {
        ASum = ASum + arr[i];
    }
    return ESum - ASum;
}

// Sorted but not first n natural numbers
// clue -> difference* between numbers and their indices will remain same
int Method2(int arr[], int size)
{
    int diff = arr[0] - 0;
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] - i) != diff)
        {
            return diff + i;
        }
    }
    return -1;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    cout << "Missing Element -> " << Method1(arr1, 10) << endl;
    // int arr2[] = {6, 7, 8, 9, 10, 12, 13, 14, 15, 16};
    int arr2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
    cout << "Missing Element -> " << Method2(arr2, 10) << endl;
    return 0;
}