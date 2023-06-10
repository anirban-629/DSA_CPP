#include <iostream>
using namespace std;

double taylor(int x, int n)
{
    static double s = 1;
    double r;
    if (n == 0)
    {
        return s;
    }
    s = 1 + (x / n) * s;
    return taylor(x, n - 1);
}
int main()
{
    cout << taylor(3, 3);
    return 0;
}
