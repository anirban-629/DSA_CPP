#include <iostream>

using namespace std;

void duplicateString(string str, int size)
{
    int hash[26] = {0};
    for (int i = 0; str[i] != '\0'; i++)
    {
        hash[int(str[i] - 97)] += 1;
    }
    for (int j = 0; j < 26; j++)
    {
        if (hash[j] > 1)
        {
            cout << char(j + 97) << " is repeated " << hash[j] << " times" << endl;
        }
    }
}

int main()
{
    string str = "finding";
    duplicateString(str, str.length());
    return 0;
}