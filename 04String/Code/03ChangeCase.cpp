#include <iostream>
using namespace std;
/*
Uppercase Lowercase
A=65      a=97
difference=97-65=32
*/
int main()
{
    // char c = 'B';
    // cout << ((c <= 90) ? char(c + 32) : char(c - 32));
    string c = "AnIrBaN";
    for (int i = 0; c[i] != '\0'; i++)
    {
        cout << ((c[i] <= 90) ? char(c[i] + 32) : char(c[i] - 32));
    }

    return 0;
}