#include <iostream>
using namespace std;

// 0 1 1 2 3 5 8 13 21 34 55
int fibR(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fibR(n - 2) + fibR(n - 1);
}
// -> Complexity : O(2^n)
// ! Excessive Recursion : It is called by itself for same values
int main()
{
    cout << fibR(4) << endl;   
    return 0;
}