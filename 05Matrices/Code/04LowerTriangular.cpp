// !                   DOUBT NOT DONE ANYWAY 


#include <iostream>
using namespace std;

/*
30000
17000
21400
12590
12316

31241
07436
00465
00096
00006

*/

class LT
{
private:
    int n;
    int *arr;

public:
    LT()
    {
        n = 2;
        arr = new int[2 * (2 + 1) / 2]; 
    }
    LT(int n)
    {
        this->n = n;
        arr = new int[n];
    }
    void setItem(int i, int j, int ele);
    int getItem(int i, int j);
    ~LT() {}
};

void LT::setItem(int i, int j, int ele)
{
    if (i == j)
    {
        arr[i - 1] = ele;
    }
    else
    {
        cout << "Not LT" << endl;
    }
}

int LT::getItem(int i, int j)
{
    if (i == j)
    {
        return arr[i - 1];
    }
    return 0;
}

int main()
{
    LT d(5);

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