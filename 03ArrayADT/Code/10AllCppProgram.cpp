#include <iostream>
using namespace std;

class Array
{
private:
    int size;
    int *A;

public:
    Array(int size)
    {
        this->size = size;
    }
    ~Array()
    {
        delete[] A;
    }
    void get(int *A, int ele);
    void set(int *A);
    void avg(int *A);
    void max(int *A);
};

void Array::get(int *A, int ele)
{
    for (int i = 0; i < size; i++)
    {
        if (A[i] == ele)
        {
            cout << "Element Found at index: " << i << endl;
            exit(1);
        }
    }
    cout << "No elements found";
}
int main()
{
    int A[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    Array a(10);
    a.get(A, 4);
    return 0;
}