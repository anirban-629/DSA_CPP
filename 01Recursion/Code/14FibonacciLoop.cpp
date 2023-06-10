#include <iostream>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34 55
int fib(int n)
{
    int t0 = 0, t1 = 1, sum = 0;
    if (n <= 1)
    {
        return n;
    }
    for (int i = 2; i <= n; i++)
    {
        sum = t0 + t1;
        t0 = t1;
        t1 = sum;
    }
    return sum;
}
// -> Complexity : O(n)

int main()
{
    cout << fib(10);
    return 0;
}