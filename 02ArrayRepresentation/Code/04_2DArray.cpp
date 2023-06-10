#include <iostream>
using namespace std;
int main()
{
    // -> Stack
    int arr1[2][2] = {
        {1, 2},
        {3, 4},
    };
    cout << arr1[0][0] << endl
         << arr1[0][1] << endl
         << arr1[1][0] << endl
         << arr1[1][1];

    // int *arr2 = new int[2 * 2];

    // -> Dynamic Memory Allocation
    // * Method 1
    int *arr3[3];
    arr3[0] = new int[4];
    arr3[1] = new int[4];
    arr3[2] = new int[4];
    return 0;

    // -> Dynamic Memory Allocation
    // * Method 2
    int **arr4;
    arr4 = new int *[3];
    arr4[0] = new int[4];
    arr4[1] = new int[4];
    arr4[2] = new int[4];
}