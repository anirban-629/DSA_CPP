#include <iostream>
using namespace std;

// Anagram
// decimal
// medical

bool isAnagram(string str1, string str2)
{
    if (str1.length() != str2.length())
    {
        return false;
    }
    bool flag = false;
    int hash[26] = {0};
    for (int i = 0; str1[i] != '\0'; i++)
    {
        hash[int(str1[i] - 97)]++;
        hash[int(str2[i] - 97)]++;
    }

    for (int j = 0; j < 26; j++)
    {
        if (hash[j] == 1)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    string str1 = "anirban", str2 = "nabrina";
    cout << isAnagram(str1, str2);
    return 0;
}