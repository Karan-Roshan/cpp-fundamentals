// Peak element which is not smaller than its neighbours
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];

    cout << "Arr[" << n << "] = ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Index of a peak point is: ";
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1]))
        {
            cout << arr[i] << " ";
        }
    }
    return 0;
}

// Example: 10 20 15 2 23 90 67