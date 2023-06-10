#include <iostream>
using namespace std;
int main()
{
    char temp = 'A';
    cout << temp << endl;
    printf("The ascii value of %c is %d\n", temp, temp);

    // ! Stack
    char arr[5] = {'a', 'b', '\0'};
    cout << arr[0] << endl
         << arr[1] << endl
         << arr[2] << endl;
    cout << "It'll find upto the \0";
    printf("%s\n", arr);
    char name[] = "JHON";
    cout << name[0] << endl
         << name[1] << endl
         << name[2] << endl
         << name[3] << endl;

    // ! Heap
    // char *name2 = "ANIRBAN";
    string name2 = "ANIRBAN";

    cout << name2[0] << endl
         << name2[1] << endl
         << name2[2] << endl
         << name2[3] << endl;

    return 0;
}