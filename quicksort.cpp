#include <iostream>
using namespace std;

void QuickSort(int pData[], int nHigh, int nLow);

int main()
{
    int pData[] = {5, 10, 15, 11, 101, 22, 103, 100, 1};
    const int nSize = sizeof(pData) / sizeof(int);
    QuickSort(pData, 0, nSize - 1);
    
    for (int i = 0;i < nSize;++i)
    {
        cout<<pData[i]<<endl;
    }
    
    return 0;
}

int Swap(int& n1, int& n2);
int Partition(int pData[], int nHigh, int nLow);
void QuickSort(int pData[], int nHigh, int nLow)
{
    int nInDex = Pari
}
