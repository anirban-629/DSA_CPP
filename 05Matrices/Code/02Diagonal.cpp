#include <iostream>
using namespace std;

/*
30000
07000
00400
00090
00006
*/

class Diagonal
{
private:
    int n;
    int *arr;

public:
    Diagonal(int n)
    {
        this->n = n;
        arr = new int[n];
    }
    void setItem(int i, int j, int ele);
    int getItem(int i, int j);
    ~Diagonal() {}
};

void Diagonal::setItem(int i, int j, int ele)
{
    if (i == j)
    {
        arr[i - 1] = ele;
    }
    else
    {
        cout << "Not Diagonal" << endl;
    }
}

int Diagonal::getItem(int i, int j)
{
    if (i == j)
    {
        return arr[i - 1];
    }
    return 0;
}

int main()
{
    Diagonal d(5);

    d.setItem(1, 1, 1);
    d.setItem(2, 2, 2);
    d.setItem(3, 3, 3);
    d.setItem(4, 4, 4);
    d.setItem(5, 5, 5);

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            cout << d.getItem(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}