// largest element of a given array of integers.
#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {8, 9, 28, 2, 5, 98, 24, 76, 76, 999};

    int max = arr[0];

    for (int i = 0; i < 10; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    cout << "Maximum element from the array: " << max ;
    return 0;
}