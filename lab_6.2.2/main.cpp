#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void CreateArray(int* arr, const int size, const int Low, const int High, int i)
{
    arr[i] = Low + rand() % (High - Low + 1);
    if(i < size - 1)
    {
        CreateArray(arr, size, Low, High, i+1);
    }
    

}
void PrintArray(int* arr, const int size, int i)
{
    cout << setw(4) << arr[i];
    if(i < size - 1)
    {
        PrintArray(arr, size, i+1);
    }
    else
        cout << endl;
}
void Inverse(int* arr, const int size, int tmp, int i )
{
    if(i % 2 == 0)
    {
    tmp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = tmp;
    }
    
    if(i < size - 1)
    {
        Inverse(arr, size, tmp, i+1);
    }
    

}
int main()
{
    srand((unsigned)time(NULL));
    const int n = 9;
    int a[n];
    int Low = -10;
    int High = 10;
    CreateArray(a, n, Low, High,0);
    PrintArray(a, n,0);
    Inverse(a, n,0,0);
    PrintArray(a, n,0);
    return 0;
}

