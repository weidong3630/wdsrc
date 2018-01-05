#include <iostream>
using namespace std;

void QuickSort(int pData[], int nLow, int nHigh);

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

void Swap(int& n1, int& n2)
{
    int n = n1;
    n1 = n2;
    n2 = n;
}

int Partition(int pData[], int nLow, int nHigh)
{
    const int nBase = pData[nLow];
    while (nLow < nHigh)
    {
        while (nLow < nHigh && pData[nHigh] >= nBase)
        {
            -- nHigh;
        }
        
        Swap(pData[nLow], pData[nHigh]);
        while (nLow < nHigh && pData[nLow] <= nBase)
        {
            ++ nLow;
        }
        
        Swap(pData[nHigh], pData[nLow]);
    }
    
    return nLow;
}

void QuickSort(int pData[], int nLow, int nHigh)
{
    if (pData != NULL && nLow >= 0 && nLow <= nHigh)
    {
        int nIndex = Partition(pData, nLow, nHigh);
        QuickSort(pData, 0, nIndex - 1);
        QuickSort(pData, nIndex + 1, nHigh);
    }
}
