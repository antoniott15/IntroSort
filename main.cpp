#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int partition();
void InsertionSort();
int randPartition(int[], int, int);
void HeapSort();
void introsort(int[], int *, int *, int);

int main()
{
    int a[] = {5, 7, -8, 9, 10, 4, -7, 0, -12, 1, 6, 2, 3, -4, -15, 12};
    int n = sizeof(a) / sizeof(a[0]);
    int maxCValues = log(n) * 2;

    introsort(a, a, a + n - 1, maxCValues);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}

int partition()
{
    return 0;
}

void InsertionSort()
{
}

int randPartition(int a[], int low, int high)
{
    int pivotIndex = rand() % (high - low + 1) + low;
    swap(a[pivotIndex], a[high]);
    return partition(a, low, high);
}

void HeapSort()
{
}

void introsort(int a[], int *begin, int *end, int maxCValues)
{
    if ((end - begin) < 16)
    {
        InsertionSort(a, begin - a, end - a);
    }
    else if (maxCValues == 0)
    {
        HeapSort(begin, end + 1);
    }
    else
    {
        int pivot = randPartition(a, begin - a, end - a);
        introsort(a, begin, a + pivot - 1, maxCValues - 1);
        introsort(a, a + pivot + 1, end, maxCValues - 1);
    }
}