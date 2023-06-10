#include <iostream>
// #include <bits/stdc++.h>

using namespace std;
int main()
{
    string str = "ABCDEFG";
    int len = str.length();
    for (int i = 0; i < len / 2; i++)
    {
        swap(str[i], str[len - 1 - i]);
    }
    cout << str << endl;
    return 0;
}