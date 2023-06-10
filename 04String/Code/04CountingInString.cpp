#include <iostream>
using namespace std;
int main()
{
    int vowel = 0, consonant = 0, space = 0, i = 0;
    string str = "My name is  Anirban";

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            space++;
        else if (
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }
    cout << "Vowels: " << vowel << endl
         << "Consonants: " << consonant << endl
         << "Spaces: " << space << endl;
    return 0;
}