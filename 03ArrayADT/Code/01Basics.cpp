#include <iostream>
using namespace std;
typedef struct Array
{
    int *A;
    int size;
    int length;
} array;

void Display(array a)
{
    for (int i = 0; i < a.length; i++)
    {
        cout << a.A[i] << endl;
    }
}

int main()
{
    int length = 5, size = (sizeof(int));
    array arr;
    arr.A = new int[5];
    arr.length = length;
    arr.size = size;
    for (int i = 0; i < length; i++)
    {
        cout << "Element: " << i + 1 << "-> ";
        cin >> arr.A[i];
    }
    Display(arr);
    return 0;
}