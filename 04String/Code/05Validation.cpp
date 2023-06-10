#include <iostream>
using namespace std;
int main()
{
    string str = "Ani#321";
    bool flag = false;
    for (size_t i = 0; str[i] != '\0'; i++)
    {
        if (
            !(str[i] >= 65 && str[i] <= 90) &&
            !(str[i] >= 97 && str[i] <= 122) &&
            !(str[i] >= 48 && str[i] <= 57))
        {
            flag = true;
            break;
        }
    }
    cout << (flag ? "Invalid String (Special Character Appeared)" : "Valid String") << endl;
    return 0;
}