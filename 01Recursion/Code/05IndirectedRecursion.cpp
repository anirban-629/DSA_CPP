#include <iostream>
using namespace std;
void B(int);
void A(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        B(n - 1);
    }
}
void B(int n)
{
    if (n > 1)
    {
        cout << n << " ";
        A(n / 2);
    }
}
int main()
{
    A(10);
    return 0;
}