// -> Unsorted

#include <iostream>
using namespace std;

void findDuplicate(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        if (a[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    count++;
                    a[j] = -1;
                }
            }
        }
        if (count > 1)
        {
            cout << a[i] << " is appearing " << count << " times" << endl;
        }
    }
}
int main()
{
    int arr[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};
    cout << "Number of Duplicates -> " << endl;
    findDuplicate(arr, 10);
    return 0;
}