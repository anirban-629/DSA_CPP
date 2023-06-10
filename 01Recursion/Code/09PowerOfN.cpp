#include <iostream>
using namespace std;
int power1(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    return m * power1(m, n - 1);
}
int power2(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return power2(m * m, n / 2);
    }
    else
    {
        return m * power2(m * m, (n - 1) / 2);
    }
}
int main()
{
    cout << power1(2, 5) << endl
         << power2(2, 5);
    return 0;
}

//  ->  Complexity: O(2^n) [Exponent]