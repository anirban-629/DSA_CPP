#include <iostream>
using namespace std;

static int count = 0;
void TOH(int n, int a, int b, int c)
{
    if (n > 0)
    {
        count++;
        TOH(n - 1, a, c, b);
        cout << a << " -> " << c << endl;
        TOH(n - 1, b, a, c);
    }
}
int main()
{
    TOH(3, 1, 2, 3);
    cout << "Total Number of Steps: " << count << endl;
    return 0;
}