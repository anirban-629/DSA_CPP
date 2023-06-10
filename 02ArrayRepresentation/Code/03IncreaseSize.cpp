#include <iostream>
using namespace std;
int main()
{
    int *p = new int[5];
    int *q = new int[10];
    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }
    delete[] p;
    p = q;
    q = NULL;
    cout << p[0] << endl
         << p[1];
    return 0;
}