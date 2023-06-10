#include <iostream>
using namespace std;
int sumN1(int n)
{
    static int sum = 0;
    if (n > 0)
    {
        sum += n;
        sumN1(n - 1);
    }
    return sum;
}
int sumN2(int n)
{
    return n * (n + 1) / 2;
}
int sumNRecursion(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sumNRecursion(n - 1) + n;
    }
}
int main()
{
    cout << sumN1(10) << endl;
    cout << sumN2(100) << endl;
    cout << sumNRecursion(100) << endl;
    return 0;
}