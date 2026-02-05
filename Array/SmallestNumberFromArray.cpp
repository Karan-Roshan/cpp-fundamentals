// smallest element of a given array of integers.
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {3, 88, 4, 89, 34, 232, 64, 24, 45, 1};

    int min = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Smallest element from the array: " << min;
    return 0;
}