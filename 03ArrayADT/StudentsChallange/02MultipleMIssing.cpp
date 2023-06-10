#include <iostream>
using namespace std;

void Method1(int arr[], int size)
{
    int diff = arr[0] - 0, count = 1;
    for (int i = 0; i < size; i++)
    {
        if ((arr[i] - i) != diff)
        {
            while (diff < (arr[i] - i))
            {
                cout << "Missing Element - " << count++ << " -> " << diff + i << endl;
                diff++;
            }
        }
    }
}

// -> Complexity = O(n)
// ! We can neglect the while loop as its not so big in count just goint upto the last element of the array 

int main()
{
    int arr1[] = {6, 7, 8, 9, 11, 12, 15, 16, 19, 20};
    Method1(arr1, 10);
    return 0;
}