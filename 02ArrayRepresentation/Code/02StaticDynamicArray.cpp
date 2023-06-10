#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    //-> Created in Stack (Static Array)
    // In c++ we can decide size at run time but in c we need to declare size in compile time

    int *p;         //-> Created in Stack
    p = new int[5]; //-> Created in Heap
    delete[] p;     //-> Destroy the memory to prevent memory leaks(Unused memory can cause memory leak)

    arr[0] = 5; //! Stored in Stack
    p[0] = 5;   //* Stored in Heap

    // ! Once After declaring the size we can't change the size

    return 0;
}