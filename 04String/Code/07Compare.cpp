#include <iostream>
using namespace std;
int main()
{
    string str1 = "PAINTER", str2 = "PAINTER";
    int i, j;
    for (i = 0, j = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            cout << "Strings are not same" << endl
                 << (str1[i] < str2[i] ? str1 : str2) << " Is Smaller" << endl;
            break;
        }
        else
        {
            cout << "Strings are same" << endl;
            break;
        }
    }
    return 0;
}