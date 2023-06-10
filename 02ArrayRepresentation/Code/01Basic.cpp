#include <iostream>
using namespace std;
int main()
{
    int a[5];
    cout << a[0] << endl
         << a[1]; // ! Garbage Value
    cout << "----------------" << endl;
    int b[] = {1, 2, 3, 4, 5};
    int c[5] = {1, 2, 3, 4, 5};
    int d[5] = {10, 20};
    cout << d[1] << endl
         << d[3] << endl
         << "----------------" << endl
         << 1 [d] << endl
         << "----------------" << endl
         << *(c + 2);
    return 0;
}