#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int arr[10] = {3, 98, 6, 23, 76, 35, 98, 45, 39, 54};
    int arr1[10], arr2[10];

    cout << "arr1: ";
    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 == 0)
        {
            arr1[i] = arr[i];
            cout << arr1[i] << " ";
        }
        else
        {
            continue;
        }
    }
    cout << endl;
    cout << "arr2: ";
    for (i = 0; i < 10; i++)
    {
        if (arr[i] % 2 != 0)
        {
            arr2[i] = arr[i];
            cout << arr2[i] << " ";
        }
        else
        {
            continue;
        }
    }
    

    return 0;
}