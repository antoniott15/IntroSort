#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int partition(int[], int, int);
void InsertionSort(int[], int, int);
int randPartition(int[], int, int);
void HeapSort(int *, int *);
void introsort(int[], int *, int *, int);

int main()
{
    int a[] = {5, 7, -8, 9, 10, 4, -7, 0, -12, 1, 6, 2, 3, -4, -15, 12, 100};
    int n = sizeof(a) / sizeof(a[0]);

    int maxdepth = log(n) * 2;

    introsort(a, a, a + n - 1, maxdepth);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

int partition(int a[], int low, int high)
{
}

void InsertionSort(int a[], int low, int high)
{
}

int randPartition(int a[], int low, int high)
{
}

void HeapSort(int *begin, int *end)
{
}

void introsort(int a[], int *begin, int *end, int maxdepth)
{
    if ((end - begin) < 16)
    {
        InsertionSort(a, begin - a, end - a);
    }
    else if (maxdepth == 0)
    {
        HeapSort(begin, end + 1);
    }
    else
    {
        int pivot = randPartition(a, begin - a, end - a);
        introsort(a, begin, a + pivot - 1, maxdepth - 1);
        introsort(a, a + pivot + 1, end, maxdepth - 1);
    }
}